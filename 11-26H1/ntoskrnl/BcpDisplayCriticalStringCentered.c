/*
 * XREFs of BcpDisplayCriticalStringCentered @ 0x14071B874
 * Callers:
 *     BcpDisplayErrorInformationModernized @ 0x14071BE90 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071C43C (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x14071B11C (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x14071C9A8 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14071D654 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalStringCentered(unsigned __int16 *a1, int a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  _WORD *v5; // r12
  int v6; // ecx
  unsigned int Flink; // r8d
  int v8; // eax
  unsigned int v9; // r14d
  int Blink; // ebx
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // r9
  unsigned int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  char v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  _QWORD *v22; // rax
  unsigned __int8 *p_InProgressFlags; // r9
  __int64 v24; // rcx
  unsigned int v25; // r12d
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  _QWORD *v29; // r12
  int GlyphAdvanceWidth; // eax
  int v31; // eax
  _QWORD *v32; // rcx
  int v33; // eax
  unsigned int v34; // r9d
  unsigned __int64 v36; // [rsp+40h] [rbp-29h]
  unsigned int v37; // [rsp+50h] [rbp-19h]
  unsigned int v38; // [rsp+54h] [rbp-15h]
  unsigned int v39; // [rsp+58h] [rbp-11h] BYREF
  ULONG pulResult[2]; // [rsp+60h] [rbp-9h] BYREF
  int v41; // [rsp+68h] [rbp-1h]
  __int64 v42; // [rsp+70h] [rbp+7h]
  unsigned int v44; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v45; // [rsp+E0h] [rbp+77h] BYREF
  int v46; // [rsp+E8h] [rbp+7Fh] BYREF

  v45 = a3;
  v4 = 84LL * a4;
  v46 = 0;
  v5 = a1;
  v44 = 0;
  v39 = 0;
  v6 = *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 16);
  if ( WheapPfaLock.MutantListHead.Flink )
  {
    Flink = (unsigned int)WheapPfaLock.MutantListHead.Flink->Flink;
    v8 = *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 80);
  }
  else
  {
    v8 = *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 80);
    Flink = v6 + v8;
  }
  v38 = Flink;
  if ( WheapPfaLock.MutantListHead.Blink )
    v9 = (unsigned int)WheapPfaLock.MutantListHead.Blink->Flink;
  else
    v9 = v8 + v6 + *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 24);
  Blink = (int)WheapPfaLock.ThreadListEntry.Blink;
  *(_QWORD *)pulResult = WheapPfaLock.ThreadListEntry.Flink;
  v11 = *(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 24LL);
  v41 = (int)WheapPfaLock.ThreadListEntry.Blink;
  *(_DWORD *)(v11 + 56) = a2;
  *(_DWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 8LL) = a2;
  v12 = *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 16) + *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 80);
  BcpSetCursorPosition(v12, HIDWORD(WheapPfaLock.ThreadListEntry.Flink), 0LL);
  v14 = (unsigned int *)(v13 + 40);
  LOBYTE(v45) = 0;
  v42 = v13 + 40;
  if ( (int)BgpFoGetStringAdvanceWidth((int)v13 + 40, (__int64)v5, &v39, v13) < 0 || v12 + v39 <= v9 )
  {
    v15 = RtlULongSub(pulResult[0], v39 >> 1, pulResult);
    v12 = pulResult[0];
    Blink = v41;
    if ( v15 < 0 )
    {
      v16 = pulResult[1];
      v17 = v41 - pulResult[1];
      goto LABEL_43;
    }
  }
  else
  {
    LOBYTE(v45) = 1;
  }
  v16 = pulResult[1];
  BcpSetCursorPosition(v12, pulResult[1], 0LL);
  v17 = Blink - v16;
  v39 = *v14;
  v20 = v18;
  if ( (int)v17 <= 0 )
    v17 = v18;
  v37 = v18;
  v21 = v18;
  if ( (*v5 & 0xFFFE) != 0 )
  {
    v22 = v5 + 4;
    *(_QWORD *)pulResult = v5 + 4;
    while ( 1 )
    {
      p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
      if ( v19 && v20 <= v21 )
      {
        v24 = v21;
        v25 = v18;
        v37 = v21;
        while ( 1 )
        {
          v26 = *(unsigned __int16 *)(*v22 + 2 * v24);
          if ( (unsigned int)v26 <= 0x20 )
          {
            v27 = 0x100002401LL;
            if ( _bittest64(&v27, v26) )
              break;
          }
          if ( (int)BgpRasGetGlyphAdvanceWidth(
                      v42,
                      v26,
                      (unsigned int)&v46,
                      (unsigned int)&gLoadedDiffHivesLock.ApcStateFill[40],
                      (__int64)&gLoadedDiffHivesLock.ApcStateFill[40]) < 0 )
            goto LABEL_43;
          v25 += v46;
          p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
          v24 = ++v37;
          v22 = *(_QWORD **)pulResult;
          if ( v9 < v25 + v12 )
          {
            p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
            if ( v17 )
            {
              if ( v12 < v9 )
              {
                LODWORD(p_InProgressFlags) = BcpPrintSpaces(
                                               *(_DWORD *)&stru_140E3EAA8.Timer.Processor,
                                               v12,
                                               v9,
                                               v16,
                                               v39,
                                               (__int64)&v44);
                if ( (int)p_InProgressFlags < 0 )
                  goto LABEL_43;
                if ( v17 < v44 )
                  v17 = v44;
              }
              v12 = v38;
              v28 = v17 + *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 40);
              v17 = 0;
              v16 += v28;
              break;
            }
          }
        }
        v5 = a1;
      }
      v29 = v5 + 4;
      *(_QWORD *)pulResult = v29;
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            v42,
                            *(unsigned __int16 *)(*v29 + 2LL * v21),
                            (unsigned int)&v46,
                            (_DWORD)p_InProgressFlags,
                            (__int64)&gLoadedDiffHivesLock.ApcStateFill[40]);
      v18 = 0;
      if ( GlyphAdvanceWidth < 0 )
        goto LABEL_43;
      if ( v9 >= v12 + v46 )
        break;
      if ( v12 < v9 )
      {
        v31 = BcpPrintSpaces(*(_DWORD *)&stru_140E3EAA8.Timer.Processor, v12, v9, v16, v39, (__int64)&v44);
        v18 = 0;
        if ( v31 < 0 )
          goto LABEL_43;
        if ( v17 < v44 )
          v17 = v44;
      }
      v12 = v38;
      v16 += v17 + *(_DWORD *)((char *)&unk_140E0F0A0 + v4 + 40);
      v17 = 0;
      if ( *(_WORD *)(*v29 + 2LL * v21) != 32 )
      {
        v32 = a1 + 4;
LABEL_39:
        v33 = BgpDisplayCharacterEx(
                *(_WORD *)(*v32 + 2LL * v21),
                *(__int64 **)&stru_140E3EAA8.Timer.Processor,
                v12,
                v16,
                v39,
                -1,
                &v46,
                &v44,
                v36);
        v18 = 0;
        if ( v33 < 0 )
          goto LABEL_43;
        v12 += v46;
        if ( v44 > v17 )
          v17 = v44;
      }
      v5 = a1;
      ++v21;
      v20 = v37;
      v19 = v45;
      v22 = *(_QWORD **)pulResult;
      if ( v21 >= *a1 >> 1 )
        goto LABEL_43;
    }
    v32 = v29;
    goto LABEL_39;
  }
LABEL_43:
  v45 = v16 + v17;
  BcpSetCursorPosition(v12, v16, &v45);
  return v34;
}
