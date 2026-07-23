/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x140297EF0
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdatePageAttributeStamp @ 0x1404C69C8 (MiUpdatePageAttributeStamp.c)
 *     MiInsertPageLockModifiedList @ 0x140520FD8 (MiInsertPageLockModifiedList.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  char v17; // dl
  int v18; // r8d
  __int64 v19; // rax
  __int64 v21; // rdx
  _KPROCESS *v22; // r10
  unsigned __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // r10
  char v33; // dl
  int v34; // r8d
  __int64 PageFilePte; // rax
  __int64 v36; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // r10
  __int64 v39; // r8
  __int64 v40; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v41[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v6 = (unsigned __int16)v3 >> 12;
  if ( (v3 & 4) != 0 )
    return a2 + 88 * v6 + 4608;
  if ( (_DWORD)v6 == *(_DWORD *)(a2 + 1300) )
  {
    if ( qword_140E2D8C0 && (v3 & 0x10) == 0 )
      v3 &= qword_140E2D8C8;
    v7 = HIDWORD(v3);
    if ( (unsigned int)v7 >= 2 && (unsigned int)v7 < 5 )
    {
      v8 = v7;
      if ( (_DWORD)v7 == 4 )
      {
        if ( (a3 & 2) != 0 )
        {
          v25 = *(unsigned int *)(a2 + 1300);
          v26 = *(_QWORD *)(a1 + 16);
          v40 = v26;
          v27 = *(_QWORD *)(v4 + 8 * v25 + 22304);
          v28 = v26;
          if ( (unsigned __int64)&v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v40 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v36 = v40;
            if ( (v40 & 1) != 0 && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v39 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
                  if ( (v39 & 0x20) != 0 )
                    v36 = v40 | 0x20;
                  v28 = v36 | 0x42;
                  if ( (v39 & 0x42) == 0 )
                    v28 = v36;
                }
              }
            }
          }
          v29 = -65537LL;
          if ( (v28 & 0x400) != 0 )
            v29 = -5LL;
          v30 = v28 & v29;
          v40 = v30;
          v31 = v30;
          if ( (v26 & 0x400) == 0 )
            v31 = v30 & 0xFFFFFFFFFFFFFFF3uLL;
          if ( v27 )
          {
            v32 = *(unsigned __int16 *)(v27 + 172);
            if ( v31 )
            {
              if ( qword_140E2D8C0 )
              {
                v33 = v31;
                v34 = qword_140E2D8C8 & v31;
                LODWORD(v31) = v31 & 0xFFFFFFEF;
                if ( (v33 & 0x10) == 0 )
                  LODWORD(v31) = v34;
              }
              PageFilePte = (unsigned int)v31 | 0x300000000LL;
              if ( qword_140E2D8C0 )
              {
                if ( (qword_140E2D8C0 & PageFilePte) != 0 )
                  PageFilePte |= 0x10uLL;
                else
                  PageFilePte |= qword_140E2D8C0;
              }
            }
            else
            {
              PageFilePte = MiMakePageFilePte(3LL);
            }
            v31 = (v32 << 12) ^ ((v32 << 12) ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
          }
          *(_QWORD *)(a1 + 16) = v31;
        }
        return v4 + 4352;
      }
LABEL_29:
      if ( v8 == 3 )
        return a2 + 4480;
      if ( v8 == 2 )
        return a2 + 88LL * *(unsigned int *)(a2 + 1300) + 4608;
      return v4 + 4352;
    }
  }
  v8 = 0;
  if ( (a3 & 1) == 0 || *(_DWORD *)(a2 + 1300) == -1 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
    goto LABEL_29;
  v9 = *(unsigned int *)(a2 + 1300);
  v10 = *(_QWORD *)(a1 + 16);
  v41[0] = v10;
  v11 = *(_QWORD *)(a2 + 8 * v9 + 22304);
  v12 = v10;
  if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v41 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v21 = v41[0];
    if ( (v41[0] & 1) != 0 && ((v41[0] & 0x20) == 0 || (v41[0] & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      v22 = KeGetCurrentThread()->ApcState.Process;
      if ( v22->AddressPolicy != 1 )
      {
        v23 = v22[2].KernelWaitTime;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 8 * (((unsigned __int64)v41 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            v21 = v41[0] | 0x20LL;
          v12 = v21 | 0x42;
          if ( (v24 & 0x42) == 0 )
            v12 = v21;
        }
      }
    }
  }
  v13 = -65537LL;
  if ( (v12 & 0x400) != 0 )
    v13 = -5LL;
  v14 = v12 & v13;
  v41[0] = v14;
  v15 = v14;
  if ( (v10 & 0x400) == 0 )
    v15 = v14 & 0xFFFFFFFFFFFFFFF3uLL;
  if ( v11 )
  {
    v16 = *(unsigned __int16 *)(v11 + 172);
    if ( v15 )
    {
      if ( qword_140E2D8C0 )
      {
        v17 = v15;
        v18 = qword_140E2D8C8 & v15;
        LODWORD(v15) = v15 & 0xFFFFFFEF;
        if ( (v17 & 0x10) == 0 )
          LODWORD(v15) = v18;
      }
      v19 = (unsigned int)v15 | 0x300000000LL;
      if ( qword_140E2D8C0 )
      {
        if ( (qword_140E2D8C0 & v19) != 0 )
          v19 |= 0x10uLL;
        else
          v19 |= qword_140E2D8C0;
      }
    }
    else
    {
      v19 = MiMakePageFilePte(3LL);
    }
    v15 = (v16 << 12) ^ ((v16 << 12) ^ v19) & 0xFFFFFFFFFFFF0FFFuLL;
  }
  *(_QWORD *)(a1 + 16) = v15;
  return v4 + 4480;
}
