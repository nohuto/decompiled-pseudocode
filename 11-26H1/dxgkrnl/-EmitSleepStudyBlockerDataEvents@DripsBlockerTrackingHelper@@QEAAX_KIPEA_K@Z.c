/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1403B4088
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1403B3D88 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x1400605AC (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402FB8CC (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1403B45F8 (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 *     ?EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z @ 0x1403B5810 (-EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z @ 0x1403B59B8 (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1403FBDE4 (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGIIE@Z @ 0x1404273D8 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGIIE@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // r12d
  unsigned int v8; // ebx
  const char *v9; // rdi
  char *v10; // rsi
  __int64 v11; // r15
  __int64 i; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v16; // rcx
  unsigned __int64 v17; // r8
  ULONGLONG v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // r15
  const wchar_t *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  ULONGLONG v25; // rax
  __int64 v26; // r9
  char *v27; // rbx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int16 *v31; // rax
  char v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch]
  unsigned int v35; // [rsp+68h] [rbp-98h]
  unsigned __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  const char *v38; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v41; // [rsp+A0h] [rbp-60h]
  struct _STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  GUID v44; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v46[80]; // [rsp+F0h] [rbp-10h] BYREF

  v34 = a3;
  v5 = a3;
  v41 = a4;
  memset(v46, 0, 0x42uLL);
  v33 = 0;
  *(_QWORD *)&v39.Length = 4325376LL;
  v39.Buffer = (wchar_t *)v46;
  v44 = 0LL;
  ActivityId = 0LL;
  v45 = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(this, a2);
  DripsBlockerTrackingHelper::EmitSleepStudyVidMmEvictionDataEvents(this, a2, v5, a4);
  v8 = 0;
  v9 = (char *)this + 8;
  v35 = 0;
  v10 = (char *)this + 64;
  v38 = (char *)this + 8;
  v11 = 0LL;
  v40 = -64LL - (_QWORD)this;
  v37 = 0LL;
  do
  {
    if ( v10[40] )
    {
      for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
      {
        if ( v41[i] == *((_QWORD *)v10 - 8) )
        {
          DestinationString = 0LL;
          RtlInitAnsiString(&DestinationString, v9);
          if ( RtlAnsiStringToUnicodeString(&v39, &DestinationString, 0) >= 0 )
          {
            *(_QWORD *)&v45 = *((_QWORD *)v10 - 8);
            *(_QWORD *)ActivityId.Data4 = (v8 << 6) + v45 + 1;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                (v39.Length >> 1) + 1,
                v13,
                v14,
                a2,
                (__int64)&v45,
                (v39.Length >> 1) + 1,
                (__int64)v39.Buffer,
                (__int64)&ActivityId,
                *v10 + v10[8] + *(v10 - 8) + v10[16],
                a2);
            Value = *((unsigned int *)v10 + 7);
            if ( (_DWORD)Value )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)&ActivityId,
                a2,
                L"Count of core access locks",
                0x1Bu,
                Value,
                &ActivityId);
            v16 = (DripsBlockerTrackingHelper *)*((_QWORD *)v10 - 2);
            if ( (unsigned __int64)v16 >= 0x2710 )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                v16,
                a2,
                L"GPU Total Time(ms)",
                0x13u,
                (unsigned __int64)v16 / 0x2710,
                &ActivityId);
            v17 = *((_QWORD *)v10 + 1);
            if ( v17 >= 0x2710 || *((_QWORD *)v10 + 2) >= 0x2710uLL )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)(v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL),
                a2,
                L"D0 Total Lag Time(ms)",
                0x16u,
                v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL,
                &ActivityId);
            v18 = *((unsigned int *)v10 + 6);
            if ( (_DWORD)v18 )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)&ActivityId,
                a2,
                L"Count of D3 wake ups",
                0x15u,
                v18,
                &ActivityId);
            v36 = *(_QWORD *)ActivityId.Data4;
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(this, a2, &v36, &v39, v8);
            v19 = *((_DWORD *)v10 - 5);
            v20 = 0LL;
            v36 = 0LL;
            if ( v19 )
            {
              do
              {
                v33 = 0;
                v21 = DripsBlockerTrackingHelper::EtwProfilerTypeName(
                        *(_DWORD *)((char *)this + 72 * v20 + v37 + 172),
                        &v33);
                *(_QWORD *)v44.Data4 = (unsigned int)v20 + *(_QWORD *)ActivityId.Data4 + 1LL;
                v23 = (__int64)&v10[72 * v20 + v40];
                v24 = *(_QWORD *)((char *)this + v23 + 128) + *(_QWORD *)((char *)this + v23 + 136);
                if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
                  McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                    (__int64)&v44,
                    (unsigned int)v20 + *(_QWORD *)ActivityId.Data4 + 1LL,
                    v22,
                    a2,
                    (__int64)&ActivityId,
                    v33,
                    (__int64)v21,
                    (__int64)&v44,
                    v24 + *((_BYTE *)this + v23 + 152) + *((_BYTE *)this + v23 + 160),
                    a2);
                if ( v24 > v36 )
                {
                  v36 = v24;
                  v19 = v20;
                }
                v25 = *(unsigned int *)((char *)this + v23 + 148);
                if ( (_DWORD)v25 )
                  DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                    (DripsBlockerTrackingHelper *)&v44,
                    a2,
                    L"Count of core access locks",
                    0x1Bu,
                    v25,
                    &v44);
                v26 = *(_QWORD *)((char *)this + v23 + 152) / 10000LL;
                if ( v26 > 0 || *(_QWORD *)&v10[72 * v20 + 96] / 10000LL > 0 )
                  DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                    (DripsBlockerTrackingHelper *)(9 * v20),
                    a2,
                    L"D0 Lag Time(ms)",
                    0x10u,
                    v26 + *(_QWORD *)&v10[72 * v20 + 96] / 10000LL,
                    &v44);
                v27 = &v10[v40];
                v28 = *(_DWORD *)&v10[72 * v20 + 168 + v40 + (_QWORD)this];
                if ( v28 )
                  DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                    (DripsBlockerTrackingHelper *)&v44,
                    a2,
                    L"Count of D3 wake ups",
                    0x15u,
                    v28,
                    &v44);
                v29 = *(_DWORD *)&v27[72 * v20 + 176 + (_QWORD)this];
                if ( v29 )
                  DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                    (DripsBlockerTrackingHelper *)&v44,
                    a2,
                    L"Count of DFx blocks",
                    0x14u,
                    v29,
                    &v44);
                v30 = *((_DWORD *)v10 - 5);
                v20 = (unsigned int)(v20 + 1);
              }
              while ( (unsigned int)v20 < v30 );
              if ( v19 == v30 )
              {
                v8 = v35;
              }
              else
              {
                v33 = 0;
                v31 = (unsigned __int16 *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                                            *(_DWORD *)&v10[72 * v19 + 108],
                                            &v33);
                v8 = v35;
                v36 = *(_QWORD *)ActivityId.Data4;
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(this, a2, &v36, v31, v35, v19, v32);
              }
              v9 = v38;
            }
            v11 = v37;
            v5 = v34;
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 165;
          }
          break;
        }
      }
    }
    ++v8;
    v9 += 4720;
    v11 += 4720LL;
    v35 = v8;
    v10 += 4720;
    v38 = v9;
    v37 = v11;
  }
  while ( v8 < 0x40 );
}
