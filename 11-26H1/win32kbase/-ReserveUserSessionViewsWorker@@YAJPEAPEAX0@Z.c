/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1401B4FC8
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401B4F34 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     Win32CreateSection @ 0x1401641E4 (Win32CreateSection.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2, int a3)
{
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // rdx
  NTSTATUS Section; // eax
  unsigned int v13; // ebx
  PVOID v14; // rcx
  int v15; // eax
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 62920);
  v9 = *(unsigned int *)(W32GetUserSessionState(v7, v6, v8) + 62924);
  v10 = (v5 + 2 * ((_DWORD)v9 + 4 * ((_DWORD)v9 + 36))) << 10;
  v18 = v10;
  Section = Win32CreateSection(a1, v11, v9, (__int64)&v18, v17, 0x4000000);
  v13 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v14 = *a1;
    ViewSize = v10;
    v15 = MmMapViewInSessionSpace(v14, a2, &ViewSize);
    v13 = v15;
    if ( v15 < 0 )
    {
      SetLastNtError(v15);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    SetLastNtError(Section);
  }
  return v13;
}
