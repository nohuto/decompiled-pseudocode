/*
 * XREFs of ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x140152920
 * Callers:
 *     CreatePerSessionWin32kCall @ 0x140191CF4 (CreatePerSessionWin32kCall.c)
 * Callees:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x140152A14 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z @ 0x140152B4C (-ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z.c)
 *     ApiSetResolveToHost @ 0x1401B7CC4 (ApiSetResolveToHost.c)
 */

__int64 __fastcall ResolveApiSetHost(struct _Win32kApiSet *a1, void *a2)
{
  int v2; // ebx
  int v3; // esi
  PCWSTR *v4; // rdx
  __int64 v7; // rax
  int v8; // r8d
  char v9; // cl
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (int)a2;
  v4 = (PCWSTR *)*((_QWORD *)a1 + 1);
  v12 = 0;
  v10 = 0LL;
  if ( v4 )
  {
    v7 = *((_QWORD *)a1 + 2);
    if ( !v7 || *(_QWORD *)(v7 + 32) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, *v4);
      if ( (int)ApiSetResolveToHost(v3, (unsigned int)&DestinationString, v8, (unsigned int)&v12, (__int64)&v10) >= 0 )
      {
        if ( !v12 )
          return (unsigned int)v2;
        v9 = v10.Length != 0 ? v12 : 0;
      }
      else
      {
        v9 = v12;
      }
      if ( v9 )
      {
        v2 = LoadApiSetHost(*((struct _Win32kApiSetHost **)a1 + 1), &v10);
        if ( v2 >= 0 )
          return (unsigned int)ResolveApiSetFunction(
                                 *(struct _Win32kApiSetFunction **)a1,
                                 *(char **)(*((_QWORD *)a1 + 1) + 8LL),
                                 *(char **)(*((_QWORD *)a1 + 1) + 16LL),
                                 *(_DWORD *)(*((_QWORD *)a1 + 1) + 24LL),
                                 *(void **)(*((_QWORD *)a1 + 1) + 32LL));
      }
    }
  }
  return (unsigned int)v2;
}
