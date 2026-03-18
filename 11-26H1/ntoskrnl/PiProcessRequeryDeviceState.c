/*
 * XREFs of PiProcessRequeryDeviceState @ 0x14090E8A4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x1404829C4 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 */

__int64 __fastcall PiProcessRequeryDeviceState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(v2, (PVOID)*(unsigned __int16 *)(v2 + 2));
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
      }
    }
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 312);
      if ( *(_QWORD *)(v9 + 40) )
      {
        v10 = *(_QWORD *)(v9 + 40);
        IoAddTriageDumpDataBlock(v10, (PVOID)0x388);
        if ( *(_WORD *)(v10 + 40) )
        {
          IoAddTriageDumpDataBlock(v10 + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v10 + 48), (PVOID)*(unsigned __int16 *)(v10 + 40));
        }
        v11 = *(_QWORD *)(a1 + 16);
        v12 = v11 + 312;
        if ( v11 )
          v13 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
        else
          v13 = 0LL;
        if ( *(_WORD *)(v13 + 56) )
        {
          if ( v11 )
            v14 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
          else
            LODWORD(v14) = 0;
          IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
          v15 = *(_QWORD *)(a1 + 16);
          if ( v15 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
            v17 = v16;
          }
          else
          {
            v16 = 0LL;
            v17 = 0LL;
          }
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
        }
        v18 = *(_QWORD *)(a1 + 16);
        v19 = v18 + 312;
        if ( v18 )
          v20 = *(_QWORD *)(*(_QWORD *)v19 + 40LL);
        else
          v20 = 0LL;
        if ( *(_QWORD *)(v20 + 16) )
        {
          v21 = v18 ? *(_QWORD *)(*(_QWORD *)v19 + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v21 + 16) + 56LL) )
          {
            if ( v18 )
              v22 = *(_QWORD *)(*(_QWORD *)v19 + 40LL);
            else
              v22 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 16) + 56, (PVOID)2);
            v23 = *(_QWORD *)(a1 + 16);
            if ( v23 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
              v25 = v24;
            }
            else
            {
              v24 = 0LL;
              v25 = 0LL;
            }
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v25 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v24 + 16) + 56LL));
          }
        }
      }
    }
LABEL_6:
    KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
  }
  Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage();
  if ( (*(_DWORD *)(v3 + 704) & 0x20000) != 0 )
    return PiProcessQueryDeviceState(*(_QWORD *)(a1 + 16), v4);
  else
    return 3221225860LL;
}
