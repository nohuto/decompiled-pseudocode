/*
 * XREFs of KiTraceLogHeteroRundown @ 0x140453274
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 *     KiTraceLogControlCallback @ 0x140B5ACB0 (KiTraceLogControlCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTraceLogHeteroRundown(_DWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r14
  int v4; // r8d
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // r13
  int v9; // r12d
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r11
  char v16; // [rsp+38h] [rbp-D0h] BYREF
  char v17; // [rsp+39h] [rbp-CFh] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh]
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  BOOL v23; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int i; // [rsp+5Ch] [rbp-ACh]
  __int64 *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp-80h]
  _QWORD v33[5]; // [rsp+98h] [rbp-70h]
  _QWORD v34[7]; // [rsp+C0h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F8h] [rbp-10h] BYREF
  int *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  BOOL *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+168h] [rbp+60h] BYREF
  unsigned int *v47; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+190h] [rbp+88h]
  char v49[16]; // [rsp+198h] [rbp+90h] BYREF
  char v50[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v51[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int *v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]
  char *v54; // [rsp+1D8h] [rbp+D0h]
  __int64 v55; // [rsp+1E0h] [rbp+D8h]
  char *v56; // [rsp+1E8h] [rbp+E0h]
  __int64 v57; // [rsp+1F0h] [rbp+E8h]
  __int64 *v58; // [rsp+1F8h] [rbp+F0h]
  __int64 v59; // [rsp+200h] [rbp+F8h]
  __int64 *v60; // [rsp+208h] [rbp+100h]
  __int64 v61; // [rsp+210h] [rbp+108h]
  __int64 *v62; // [rsp+218h] [rbp+110h]
  __int64 v63; // [rsp+220h] [rbp+118h]

  result = (unsigned int)KeHeteroSystem;
  v2 = 0LL;
  if ( KeHeteroSystem )
  {
    if ( *a1 > 5u )
    {
      v19 = KeHeteroSystem;
      v36 = &v19;
      v20 = KeHeteroSystemVirtual;
      v38 = &v20;
      v21 = KeHeteroSystemQos;
      v40 = &v21;
      v22 = KiEfficiencyClassSystem;
      v42 = &v22;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v23 = PpmHeteroMultiCoreClassesEnabled != 0;
      v44 = &v23;
      tlgWriteTransfer_EtwWriteTransfer((__int64)a1, (unsigned __int8 *)&byte_14004974F, 0LL, 0LL, 7u, &v35);
    }
    v4 = KiHgsPlusConfiguration;
    v5 = 0;
    v33[0] = "KHeteroCpuPolicyAll";
    v33[1] = "KHeteroCpuPolicyLarge";
    v33[2] = "KHeteroCpuPolicyLargeOrIdle";
    v33[3] = "KHeteroCpuPolicySmall";
    v33[4] = "KHeteroCpuPolicySmallOrIdle";
    v32[0] = "KHeteroShortRunning";
    v32[1] = "KHeteroLongRunning";
    v34[0] = "KHeteroCpuQosHigh";
    v34[1] = "KHeteroCpuQosMedium";
    v34[2] = "KHeteroCpuQosLow";
    v34[3] = "KHeteroCpuQosMultimedia";
    v34[4] = "KHeteroCpuQosDeadline";
    v34[5] = "KHeteroCpuQosEco";
    result = (unsigned __int64)"KHeteroCpuQosUtility";
    v34[6] = "KHeteroCpuQosUtility";
    for ( i = KiHgsPlusConfiguration; v5 < (unsigned __int16)KiSubNodeCount; ++v5 )
    {
      if ( *(_QWORD *)(KiSubNodes + 8LL * v5) )
      {
        v6 = 0;
        if ( v4 )
        {
          do
          {
            v18 = 0;
            v27 = v34;
            v7 = 0;
            v8 = 0LL;
            do
            {
              v9 = 2 * v7;
              v10 = v27;
              do
              {
                if ( *a1 > 5u )
                {
                  v11 = *v10;
                  v47 = &v24;
                  v24 = v5;
                  v48 = 4LL;
                  tlgCreate1Sz_char(v49, v11);
                  tlgCreate1Sz_char(v50, v32[v2]);
                  tlgCreate1Sz_char(v51, v33[KiDynamicHeteroCpuPolicy[v2 + v8]]);
                  v29 = v12;
                  v52 = &v25;
                  v16 = *((_BYTE *)&stru_140FC11F0.StackBase + v13);
                  v25 = v6;
                  v54 = &v16;
                  v17 = *((_BYTE *)&stru_140FC11F0.CycleTime + v13);
                  v53 = 4LL;
                  v56 = &v17;
                  v58 = &v28;
                  v60 = &v29;
                  v62 = &v30;
                  v55 = 1LL;
                  v57 = 1LL;
                  v28 = v14;
                  v59 = 8LL;
                  v61 = 8LL;
                  v30 = v15;
                  v63 = 8LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)a1,
                    (unsigned __int8 *)&word_1400497E6,
                    0LL,
                    0LL,
                    0xCu,
                    &v46);
                }
                ++v9;
                ++v2;
              }
              while ( v2 < 2 );
              v8 += 2LL;
              ++v27;
              v7 = v18 + 1;
              v18 = v7;
              v2 = 0LL;
            }
            while ( v7 < 7 );
            v4 = i;
            ++v6;
          }
          while ( v6 < i );
        }
      }
      result = (unsigned __int16)KiSubNodeCount;
    }
  }
  return result;
}
