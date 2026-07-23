/*
 * XREFs of MiLogSlabEntryAllocateFailure @ 0x1402070A8
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MiNodeAvailablePages @ 0x1404B7E38 (MiNodeAvailablePages.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogSlabEntryAllocateFailure(__int64 a1, int a2, int a3, int a4, char a5)
{
  ULONG *v7; // r15
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v12; // ebx
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+28h] [rbp-D8h]
  _BYTE v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  _BYTE *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  v29 = a3;
  v28 = a2;
  if ( !stru_140E366D8.FirstArgument )
    return;
  v7 = *(ULONG **)(a1 + 24);
  v8 = *(unsigned int *)(a1 + 132);
  v9 = *((_QWORD *)v7 + 2) + 56320 * v8;
  v10 = *(_QWORD *)(v9 + 13888);
  if ( v7 == &MiSystemPartition )
  {
    v11 = *((_QWORD *)&stru_140E366D8.WaitBlock[0].Object + v8);
    if ( v10 <= v11 )
    {
      v10 = 0LL;
      goto LABEL_5;
    }
    v10 -= v11;
  }
  if ( v10 )
  {
    v12 = 10;
    v17 = 100 * MiNodeAvailablePages() / v10;
    if ( v17 > 0xA )
    {
      v12 = 30;
      if ( v17 > 0x1E )
      {
        v12 = 100;
        v9 = 50LL;
        if ( v17 <= 0x32 )
          v12 = 50;
      }
    }
    goto LABEL_6;
  }
LABEL_5:
  v12 = 0;
LABEL_6:
  CurrentIrql = KeGetCurrentIrql();
  v14 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
  }
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000400LL) )
  {
    v31 = 1LL;
    v34 = &v31;
    v21 = *(_DWORD *)(a1 + 128);
    v35 = 8LL;
    v36 = &v21;
    v22 = *(_DWORD *)(a1 + 132);
    v38 = &v22;
    v23 = *(unsigned __int16 *)v7;
    v40 = &v23;
    v24 = v28;
    v42 = &v24;
    v44 = (__int64 *)&v25;
    v46 = &v32;
    v26 = v29;
    v48 = &v26;
    v50 = &v27;
    v52 = v20;
    v54 = &v30;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v25 = v12;
    v45 = 4LL;
    v32 = v10;
    v47 = 8LL;
    v49 = 4LL;
    v27 = a4;
    v51 = 4LL;
    v20[0] = a5;
    v53 = 1LL;
    v30 = 0x1000000LL;
    v55 = 8LL;
    tlgWriteAgg(v15, (int)&byte_14005A4E7, v15, 13, &v33);
  }
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 1024LL) )
  {
    v27 = *(_DWORD *)(a1 + 128);
    v35 = 4LL;
    v34 = (__int64 *)&v27;
    v26 = *(_DWORD *)(a1 + 132);
    v36 = &v26;
    v25 = *(unsigned __int16 *)v7;
    v38 = &v25;
    v24 = v28;
    v40 = &v24;
    v42 = &v23;
    v44 = &v30;
    v22 = v29;
    v46 = (unsigned __int64 *)&v22;
    v48 = &v21;
    v50 = (int *)v20;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v23 = v12;
    v43 = 4LL;
    v30 = v10;
    v45 = 8LL;
    v47 = 4LL;
    v21 = a4;
    v49 = 4LL;
    v20[0] = a5;
    v51 = 1LL;
    tlgWriteEx_EtwWriteEx(v16, (int)&dword_14005A42C, v16, 1, v18, v19, 0xBu, (__int64)&v33);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(CurrentIrql);
}
