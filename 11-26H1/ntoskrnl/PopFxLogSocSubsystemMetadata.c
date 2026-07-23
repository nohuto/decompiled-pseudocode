/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x140A4271C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1407D1060 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDiagTraceSleepStudyBlockerData @ 0x1407D7E7C (PopDiagTraceSleepStudyBlockerData.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140A427E8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  int v4; // r14d
  __int64 v5; // r15
  unsigned int i; // r13d
  __int64 v7; // r12
  _QWORD *Pool2; // rbx
  unsigned int j; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rsi
  __int64 v16; // rdx
  unsigned int k; // edx
  __int64 v18; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v19; // rax
  struct _EVENT_DATA_DESCRIPTOR *v20; // rdi
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  int *v27; // rcx
  ULONGLONG v28; // rax
  __int64 v29; // rdx
  int *v30; // rcx
  __int64 v31; // rdx
  ULONGLONG v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  ULONG v35; // ecx
  __int64 v36; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+48h] BYREF
  int v38; // [rsp+84h] [rbp+4Ch]
  unsigned int v39; // [rsp+88h] [rbp+50h]
  int v40; // [rsp+90h] [rbp+58h] BYREF
  ULONG UserDataCount; // [rsp+98h] [rbp+60h]

  v40 = a3;
  v39 = a2;
  v38 = HIDWORD(a1);
  v36 = PopWnfCsEnterScenarioId;
  v3 = a2;
  LOBYTE(v40) = 0;
  v4 = 0;
  v37 = 0;
  v5 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  if ( v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 20); ++i )
    {
      v7 = 344LL * i;
      v37 = *(_DWORD *)(v7 + v5 + 104);
      if ( v37 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        for ( j = 0; j < v37; HIDWORD(Pool2[v12 + 36]) = -1430541637 )
        {
          v11 = j++;
          v12 = 37 * v11;
          WORD1(Pool2[v12]) = 128;
          WORD1(Pool2[v12 + 2]) = 128;
          Pool2[v12 + 1] = &Pool2[37 * v11 + 4];
          LODWORD(Pool2[v12 + 20]) = -1430541637;
          Pool2[v12 + 3] = (char *)&Pool2[37 * v11 + 20] + 4;
        }
        v13 = ExAllocatePool2(0x100uLL);
        v15 = (void *)v13;
        if ( v13 )
        {
          *(_DWORD *)v13 = v3;
          v16 = 0LL;
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v7 + v5 + 64);
          *(_DWORD *)(v13 + 24) = 0;
          *(_QWORD *)(v13 + 16) = v7 + v5 + 40;
          for ( *(_DWORD *)(v13 + 28) = v37; (unsigned int)v16 < v37; v16 = (unsigned int)(v16 + 1) )
          {
            v14 = (unsigned int)v16;
            *(_QWORD *)(v13 + 8 * v16 + 32) = &Pool2[37 * (unsigned int)v16];
          }
          if ( PopPluginQuerySocSubsystemMetadata(v14, *(_DWORD *)(v7 + v5 + 60), v13) )
          {
            for ( k = 0; k < v37; ++k )
            {
              v18 = 37LL * k;
              if ( LODWORD(Pool2[v18 + 20]) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, WORD1(Pool2[v18]));
              if ( HIDWORD(Pool2[v18 + 36]) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, WORD1(Pool2[v18 + 2]));
            }
            UserDataCount = v37 + 4 * v37 + 3;
            v19 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x100uLL);
            v20 = v19;
            if ( v19 )
            {
              v21 = 2;
              LOBYTE(v40) = v36;
              v22 = 0;
              *(_QWORD *)&v19->Size = 1LL;
              v19->Ptr = (ULONGLONG)&v40;
              v19[1].Ptr = (ULONGLONG)&v37;
              for ( *(_QWORD *)&v19[1].Size = 4LL; v22 < v37; *(&v20->Ptr + v33) = v32 )
              {
                v23 = v21;
                v24 = v21 + 1;
                v20[v23].Ptr = v7 + v5 + 72;
                *(_QWORD *)&v20[v23].Size = 16LL;
                v25 = v22++;
                v26 = 37 * v25;
                v27 = (int *)&Pool2[37 * v25 + 20];
                *v27 = LOWORD(Pool2[37 * v25]) >> 1;
                v20[v24].Ptr = (ULONGLONG)v27;
                *(_QWORD *)&v20[v24].Size = 4LL;
                v28 = Pool2[37 * v25 + 1];
                v29 = v21 + 2;
                v20[v29].Size = LOWORD(Pool2[v26]);
                v20[v29].Ptr = v28;
                v30 = (int *)&Pool2[v26 + 36] + 1;
                v20[v29].Reserved = 0;
                v31 = v21 + 3;
                *v30 = LOWORD(Pool2[v26 + 2]) >> 1;
                v20[v31].Ptr = (ULONGLONG)v30;
                *(_QWORD *)&v20[v31].Size = 4LL;
                v32 = Pool2[v26 + 3];
                v33 = v21 + 4;
                v21 += 5;
                v33 *= 2LL;
                *(&v20->Size + 2 * v33) = LOWORD(Pool2[v26 + 2]);
                *(&v20->Reserved + 2 * v33) = 0;
              }
              v34 = v21;
              v20[v34].Ptr = (ULONGLONG)&v36;
              v35 = UserDataCount;
              *(_QWORD *)&v20[v34].Size = 8LL;
              PopDiagTraceSleepStudyBlockerData(v35, v20);
              ExFreePoolWithTag(v20, 0x4D584650u);
            }
            else
            {
              v4 = -1073741670;
            }
            v3 = v39;
          }
          else
          {
            v4 = -1073741595;
          }
        }
        else
        {
          v4 = -1073741670;
        }
        ExFreePoolWithTag(Pool2, 0x4D584650u);
        if ( v15 )
          ExFreePoolWithTag(v15, 0x4D584650u);
        if ( v4 < 0 )
          return (unsigned int)v4;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v4;
}
