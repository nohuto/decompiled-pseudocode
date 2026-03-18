/*
 * XREFs of ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x14026C56C
 * Callers:
 *     CreatePerSessionWin32kCall @ 0x140265400 (CreatePerSessionWin32kCall.c)
 * Callees:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x140246314 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z @ 0x14026B740 (-ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z.c)
 *     ApiSetResolveToHost @ 0x14034EAF0 (ApiSetResolveToHost.c)
 */

__int64 __fastcall ResolveApiSetHost(struct _Win32kApiSet *a1, void *a2)
{
  int v2; // ebx
  int v3; // esi
  PCWSTR *v4; // rdx
  __int64 v6; // rax
  int v7; // r8d
  char v8; // cl
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
    v6 = *((_QWORD *)a1 + 2);
    if ( !v6 || *(_QWORD *)(v6 + 32) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, *v4);
      if ( (int)ApiSetResolveToHost(v3, (unsigned int)&DestinationString, v7, (unsigned int)&v12, (__int64)&v10) < 0 )
      {
        v8 = v12;
      }
      else
      {
        if ( !v12 )
          return (unsigned int)v2;
        v8 = v10.Length != 0 ? v12 : 0;
      }
      if ( v8 )
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
