/*
 * XREFs of sub_1401172A0 @ 0x1401172A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_1401152F0 @ 0x1401152F0 (sub_1401152F0.c)
 *     sub_140115430 @ 0x140115430 (sub_140115430.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1401172A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v6; // r13
  IRP *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  char v12; // r13
  __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // rax
  int v16; // r9d
  PSLIST_ENTRY v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r8
  unsigned __int16 *v21; // rax
  __int64 QuadPart; // rbx
  NTSTATUS v23; // edi
  char v24; // bl
  KIRQL v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v33; // rcx
  __int64 v34; // rcx
  int v35; // [rsp+60h] [rbp-68h]
  __int16 v36; // [rsp+64h] [rbp-64h]
  _QWORD *v37; // [rsp+68h] [rbp-60h]
  __int64 v38; // [rsp+70h] [rbp-58h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  __int64 v40; // [rsp+80h] [rbp-48h]
  char v41; // [rsp+D0h] [rbp+8h]
  char v43; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v6 = *(_BYTE *)(a4 + 126);
  v7 = *(IRP **)(a4 + 40);
  v8 = *(unsigned int *)(a4 + 120);
  v9 = *(_QWORD *)(a4 + 64);
  v10 = *(_QWORD *)(a4 + 72);
  v40 = *(_QWORD *)(a1 + 64);
  v37 = *(_QWORD **)(v4 + 16);
  v43 = 0;
  v41 = 0;
  *(_QWORD *)(a4 + 24) = a3;
  if ( (v6 & 2) != 0 )
  {
    v41 = 1;
    v11 = sub_14011DA00(*(_QWORD *)(a4 + 88), v8, v10, v9, (__int64)&v43, 0LL, 0LL, 0LL, 1);
    goto LABEL_13;
  }
  v12 = v6 & 1;
  v13 = *(unsigned int *)(a4 + 116);
  v14 = *(_DWORD *)(a4 + 112);
  v38 = *(_QWORD *)(a4 + 104);
  v15 = *(_QWORD *)(a4 + 96);
  v16 = 0;
  v39 = v15;
  v36 = v14;
  v35 = v13;
  if ( ((v13 + 4095 + ((LODWORD(v7->MdlAddress->StartVa) + v7->MdlAddress->ByteOffset) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
  {
LABEL_8:
    if ( !v9 )
    {
      v20 = *(_QWORD *)(v4 + 16);
      if ( (*(_BYTE *)(v20 + 136) & 2) != 0 )
        v10 = *(_QWORD *)(v20 + 728) + 192 * v8;
      else
        LODWORD(v10) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v20 + 872) + 2 * v8) + *(_DWORD *)(v20 + 728) - 192;
    }
    v11 = sub_14011F570(v4, (_DWORD)v7, v10, v16, v8, 0, v13, v39, v38, v14, v12, v9);
LABEL_13:
    v19 = v11;
    if ( v11 == 259 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v17 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 880LL) + 8 * v8));
  v16 = (int)v17;
  if ( v17 || (v18 = sub_1401147F0(*(_QWORD *)(v4 + 16), v8), v16 = v18, v18) )
  {
    LOWORD(v14) = v36;
    LODWORD(v13) = v35;
    goto LABEL_8;
  }
  sub_140118560(v4, v7, (unsigned int)v8);
  v19 = -2147483631;
LABEL_14:
  v21 = *(unsigned __int16 **)(a4 + 64);
  if ( v21 )
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a4 + 72) + 64LL),
      (PSLIST_ENTRY)(*(_QWORD *)(*(_QWORD *)(a4 + 72) + 32LL) + ((unsigned __int64)*v21 << 7)));
LABEL_16:
  if ( (int)(v19 + 0x80000000) >= 0 && v19 != -2147483631 )
  {
    if ( v41 )
    {
      if ( !v43 )
        return;
      QuadPart = v7->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      v23 = *(_DWORD *)(QuadPart + 112);
      sub_1401152F0(v37, QuadPart);
      sub_140115430((__int64)v37, v8, QuadPart, (__int64)v7);
      v7->IoStatus.Status = v23;
    }
    else
    {
      v24 = *(_BYTE *)(a4 + 126);
      v25 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v40 + 1144) + 8LL) + 96LL))(
        *(_QWORD *)(v40 + 1144),
        a3,
        (v24 & 1) == 0);
      if ( v25 < 2u )
        KeLowerIrql(v25);
      v26 = *(_QWORD *)(*(_QWORD *)(a4 + 40) + 184LL);
      *(_QWORD *)(v26 + 8) = *(_QWORD *)(a4 + 48);
      *(_QWORD *)(v26 + 24) = *(_QWORD *)(a4 + 56);
      v27 = *(unsigned int *)(a4 + 120);
      *(_QWORD *)(a4 + 24) = 0LL;
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_BYTE *)(a4 + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v37[112] + 8 * v27), (PSLIST_ENTRY)a4);
      v7->IoStatus.Status = v19;
    }
    v7->IoStatus.Information = 0LL;
    IofCompleteRequest(v7, 0);
    v28 = *(_QWORD *)(v4 + 128);
    if ( !*(_BYTE *)v28
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v28 + 24) + 8 * v8), 0xFFFFFFFF) == 1 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 128LL);
      v30 = *(_QWORD *)(v4 + 128);
      if ( v30 )
      {
        if ( *(_QWORD *)(v30 + 8) )
        {
          v31 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v30 + 40);
          if ( v31 )
          {
            if ( ExAcquireRundownProtectionCacheAware(v31) )
            {
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v4 + 128) + 8LL), 0LL, 2LL);
              v32 = *(_QWORD *)(v4 + 128);
              if ( v32 )
              {
                if ( *(_QWORD *)(v32 + 8) )
                {
                  v33 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v32 + 40);
                  if ( v33 )
                    ExReleaseRundownProtectionCacheAware(v33);
                }
              }
            }
          }
        }
      }
      v34 = *(_QWORD *)(v29 + 160);
      if ( *(_BYTE *)v34 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v34 + 8), 0LL, 2LL);
    }
  }
}
