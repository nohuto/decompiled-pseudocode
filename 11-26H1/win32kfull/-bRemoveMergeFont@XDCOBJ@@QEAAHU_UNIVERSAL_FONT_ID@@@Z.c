/*
 * XREFs of ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140329BC8
 * Callers:
 *     NtGdiRemoveMergeFont @ 0x140312550 (NtGdiRemoveMergeFont.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 */

__int64 __fastcall XDCOBJ::bRemoveMergeFont(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // r10
  __int64 v7; // r9
  __int64 i; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2072LL);
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( v2 )
        break;
      v7 = *v4;
      if ( *(_DWORD *)(*v4 + 144LL) == (_DWORD)a2 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 216); i = (unsigned int)(i + 1) )
        {
          a1 = *(_DWORD **)(v7 + 8 * i + 224);
          if ( a1[22] == HIDWORD(a2) )
          {
            v2 = 1;
            goto LABEL_10;
          }
        }
      }
      v4 = (_QWORD *)v4[1];
LABEL_10:
      if ( v2 )
        v6 = v5;
      v5 = v6;
      if ( !v4 )
      {
        if ( !v2 )
          return v2;
        break;
      }
    }
    v9 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
    GreAcquireSemaphore<17,>(v9 + 4864);
    v10 = *(_QWORD *)(v9 + 20384);
    v11 = *(_QWORD *)(*v4 + 136LL);
    --*(_DWORD *)(*v4 + 64LL);
    v15[0] = v11;
    v12 = 64;
    if ( v11 != v10 )
      v12 = 32;
    PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v15, (struct PFF *)*v4, 0xFFFFFFFF, v12);
    v13 = v4[1];
    if ( v4 == *(_QWORD **)(*(_QWORD *)v3 + 2072LL) )
      *(_QWORD *)(*(_QWORD *)v3 + 2072LL) = v13;
    else
      v5[1] = v13;
    Win32FreePool(v4);
  }
  return v2;
}
