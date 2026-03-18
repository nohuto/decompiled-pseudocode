/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1403E7724
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1400320DC (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1400569DC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x140057024 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // si
  __int64 v7; // rcx
  _WORD *v8; // rcx
  char v10; // al
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int16 v12; // [rsp+28h] [rbp-18h]
  char v13; // [rsp+2Ah] [rbp-16h]
  PVOID Tag; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]

  Tag = (PVOID)a1;
  *(_DWORD *)a2 = 0;
  v15 = 0;
  v11 = a1;
  v12 = 0;
  v13 = 0;
  if ( a1 )
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)&v11);
  if ( AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)&Tag) < 0 )
  {
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v11);
    if ( v15 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
    return 3221225659LL;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)&v11);
    v4 = *(_QWORD *)(a1 + 4032);
    if ( !v4 )
    {
LABEL_13:
      AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v11);
      if ( v15 )
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
      return 0LL;
    }
    v5 = *(_QWORD *)(v4 + 3160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 290);
      v7 = *(_QWORD *)(v4 + 3168);
      if ( v7 )
      {
        v8 = (_WORD *)(v7 + 640);
      }
      else
      {
        WdLogSingleEntry0(4LL);
        v8 = 0LL;
        WdLogGlobalForLineNumber = 1311;
      }
      if ( *(int *)(*(_QWORD *)(a1 + 4032) + 3044LL) >= 2000 )
      {
        if ( v6 )
          *(_BYTE *)a2 = 1;
        if ( *(_DWORD *)(a1 + 3152) >= 2u && v8 && *v8 && v6 )
          *(_BYTE *)(a2 + 1) = 1;
      }
      if ( *(_DWORD *)(a1 + 3360) != -1 && *(_WORD *)(a1 + 4992) )
      {
        v10 = *(_BYTE *)(a1 + 3356) & 1;
        *(_BYTE *)(a2 + 2) = 1;
        *(_BYTE *)(a2 + 3) = v10;
      }
      goto LABEL_13;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1288;
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v11);
    if ( v15 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
    return 3221225485LL;
  }
}
