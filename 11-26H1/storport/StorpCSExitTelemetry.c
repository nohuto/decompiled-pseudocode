/*
 * XREFs of StorpCSExitTelemetry @ 0x140048DA4
 * Callers:
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpCSExitTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int64 *i; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rcx
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  char v27; // [rsp+33h] [rbp-CDh] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  int *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  int *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  __int64 *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  __int64 *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  __int64 *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  int *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  int *v75; // [rsp+1C0h] [rbp+C0h]
  __int64 v76; // [rsp+1C8h] [rbp+C8h]
  int *v77; // [rsp+1D0h] [rbp+D0h]
  __int64 v78; // [rsp+1D8h] [rbp+D8h]
  __int64 *v79; // [rsp+1E0h] [rbp+E0h]
  __int64 v80; // [rsp+1E8h] [rbp+E8h]
  __int64 *v81; // [rsp+1F0h] [rbp+F0h]
  __int64 v82; // [rsp+1F8h] [rbp+F8h]
  __int64 *v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = *(_QWORD *)(a1 + 5288);
    if ( v3 )
      *(_QWORD *)(a1 + 5296) += (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    if ( *(_QWORD *)(a1 + 5024) )
    {
      v4 = *(_QWORD *)(a1 + 5312);
      if ( v4 )
        *(_QWORD *)(a1 + 5320) += (v2 - v4) / 0x2710uLL;
      v5 = *(_QWORD *)(a1 + 5392);
      if ( v5 )
        *(_QWORD *)(a1 + 5400) += (v2 - v5) / 0x2710uLL;
      v6 = *(_QWORD *)(a1 + 5328);
      if ( v6 )
        *(_QWORD *)(a1 + 5336) += (v2 - v6) / 0x2710uLL;
      v7 = *(_QWORD *)(a1 + 5304);
      if ( v7 )
        v7 -= *(_QWORD *)(a1 + 5280);
      if ( (unsigned int)dword_140172178 > 5 && (unsigned __int8)tlgKeywordOn(v7, 0x400000000000LL) )
      {
        v46 = 16LL;
        v45 = a1 + 5128;
        v28 = *(_DWORD *)(a1 + 56);
        v47 = &v28;
        v11 = *(_QWORD *)(v10 + 8);
        v48 = 4LL;
        v50 = 4LL;
        v52 = 8LL;
        v12 = *(_DWORD *)(v11 + 12);
        v49 = &v29;
        v29 = v12;
        v13 = v2 - *(_QWORD *)(a1 + 5280);
        v54 = 8LL;
        v51 = &v35;
        v36 = *(_QWORD *)(a1 + 5296);
        v53 = &v36;
        v37 = *(_QWORD *)(a1 + 5336);
        v55 = &v37;
        v38 = *(_QWORD *)(a1 + 5320);
        v57 = &v38;
        v30 = *(_DWORD *)(a1 + 5364);
        v59 = &v30;
        v31 = *(_DWORD *)(a1 + 5368);
        v61 = &v31;
        v32 = *(_DWORD *)(a1 + 5372);
        v63 = (unsigned __int64 *)&v32;
        v33 = *(_DWORD *)(a1 + 5376);
        v65 = (__int64 *)&v33;
        v67 = &v39;
        v40 = *(_QWORD *)(a1 + 5344);
        v69 = &v40;
        v41 = *(_QWORD *)(a1 + 5352);
        v71 = &v41;
        v34 = *(_DWORD *)(a1 + 5360);
        v73 = &v34;
        v35 = v13 / 0x2710;
        v56 = 8LL;
        v58 = 8LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        v39 = v9;
        v68 = 8LL;
        v70 = 8LL;
        v72 = 8LL;
        v74 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_140162DA0, v8, v9, 0x11u, v44);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 8)) )
      {
        v15 = i[259];
        if ( v15 )
          i[260] += (v2 - v15) / 0x2710uLL;
        v16 = i[261];
        if ( v16 )
          i[262] += (v2 - v16) / 0x2710uLL;
        v17 = i[269];
        if ( v17 )
          i[270] += (v2 - v17) / 0x2710uLL;
        v18 = i[258];
        if ( v18 )
          v18 -= *(_QWORD *)(a1 + 5280);
        if ( (unsigned int)dword_140172178 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(v18, 0x400000000000LL) )
          {
            v20 = i[226];
            v45 = a1 + 5128;
            v46 = 16LL;
            v47 = (int *)(i + 255);
            v34 = *(_DWORD *)(a1 + 56);
            v49 = &v34;
            v24 = *((_BYTE *)i + 40);
            v51 = (unsigned __int64 *)&v24;
            v25 = *((_BYTE *)i + 41);
            v53 = (__int64 *)&v25;
            v26 = *((_BYTE *)i + 42);
            v55 = (__int64 *)&v26;
            v21 = *(_QWORD *)(v20 + 8);
            v48 = 16LL;
            v50 = 4LL;
            v52 = 1LL;
            v22 = *(_DWORD *)(v21 + 12);
            v57 = (__int64 *)&v33;
            v32 = *(_DWORD *)(v20 + 24);
            v59 = &v32;
            LOBYTE(v21) = (*(_DWORD *)(v20 + 32) & 0x800) != 0;
            v33 = v22;
            v27 = v21;
            v23 = v2 - *(_QWORD *)(a1 + 5280);
            v61 = (int *)&v27;
            v54 = 1LL;
            v63 = &v41;
            v40 = *(_QWORD *)(a1 + 5296);
            v65 = &v40;
            v39 = i[260];
            v67 = &v39;
            v38 = i[262];
            v69 = &v38;
            v31 = *((_DWORD *)i + 531);
            v71 = (unsigned __int64 *)&v31;
            v30 = *((_DWORD *)i + 532);
            v73 = &v30;
            LODWORD(v21) = *((_DWORD *)i + 533);
            v56 = 1LL;
            v58 = 4LL;
            v60 = 4LL;
            v62 = 1LL;
            v41 = v23 / 0x2710;
            v64 = 8LL;
            v66 = 8LL;
            v68 = 8LL;
            v70 = 8LL;
            v72 = 4LL;
            v74 = 4LL;
            v29 = v21;
            v76 = 4LL;
            v75 = &v29;
            v28 = *((_DWORD *)i + 534);
            v77 = &v28;
            v79 = &v37;
            v36 = i[263];
            v81 = &v36;
            v42 = i[264];
            v83 = &v42;
            LODWORD(v35) = *((_DWORD *)i + 530);
            v85 = &v35;
            v78 = 4LL;
            v37 = v19;
            v80 = 8LL;
            v82 = 8LL;
            v84 = 8LL;
            v86 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v23, (unsigned __int8 *)dword_14016271C, 1LL, v19, 0x17u, v44);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
      }
      *(__int64 *)((char *)i + 2124) = 0LL;
      *(__int64 *)((char *)i + 2132) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 5364) = 0LL;
    *(_QWORD *)(a1 + 5372) = 0LL;
    *(_QWORD *)(a1 + 5280) = v2;
  }
}
