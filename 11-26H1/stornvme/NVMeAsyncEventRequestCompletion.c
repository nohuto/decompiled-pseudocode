/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x140023580
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x14000CB80 (NVMeIssueAsyncEventCommand.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     IsNVMeControllerOnFatalError @ 0x14000FBB0 (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerAsyncReset @ 0x140010870 (NVMeControllerAsyncReset.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  __int64 SrbExtension; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r11
  _BYTE *v13; // r14
  __int64 v14; // rdx
  unsigned int i; // ecx
  __int64 v16; // rdx
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v19; // rdx
  unsigned int v20; // esi
  char v21; // r13
  char v22; // al
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r8d
  void *v26; // rcx
  unsigned __int8 v27; // dl
  __int64 v28; // r9
  char v29; // cl
  int v30; // ebx
  unsigned __int64 v31; // rbx
  __int16 v32; // cx
  int v34; // [rsp+28h] [rbp-B0h]
  __int128 v35; // [rsp+90h] [rbp-48h] BYREF
  void *v36; // [rsp+F0h] [rbp+18h] BYREF
  unsigned __int64 v37; // [rsp+F8h] [rbp+20h] BYREF

  v4 = 1;
  SrbExtension = GetSrbExtension(a2);
  v10 = SrbExtension;
  v35 = 0uLL;
  if ( !v11 || (LOBYTE(v8) = *(_BYTE *)(a2 + 3), (_BYTE)v8 == 14) || (*(_DWORD *)(a1 + 24) & 0xE) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    return SrbExtension;
  }
  v12 = (unsigned int)(v9 + 1);
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    v13 = *(_BYTE **)(GetSrbExtension(a2) + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v13 = (_BYTE *)(a1 + 1008);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 1392);
    if ( v14 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 1552); i += v9 )
      {
        v13 = (_BYTE *)(v14 + ((unsigned __int64)i << 7));
        if ( (_BYTE *)a2 == v13 + 8 )
          goto LABEL_24;
      }
    }
    v16 = *(_QWORD *)(a1 + 1400);
    if ( v16 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); j += v9 )
      {
        v13 = (_BYTE *)(v16 + ((unsigned __int64)j << 7));
        if ( (_BYTE *)a2 == v13 + 8 )
          goto LABEL_24;
      }
    }
    for ( k = 0; k < (unsigned int)v12; k += v9 )
    {
      v19 = (unsigned __int64)k << 7;
      if ( a2 == v19 + a1 + 1144 )
      {
        v13 = (_BYTE *)(v19 + a1 + 1136);
        goto LABEL_24;
      }
    }
    v13 = 0LL;
  }
LABEL_24:
  if ( (_BYTE)v8 == (_BYTE)v9 )
  {
    v20 = 0;
    v21 = *(_BYTE *)(a3 + 2);
    LODWORD(SrbExtension) = *(_DWORD *)a3 & 7;
    if ( !(_DWORD)SrbExtension )
    {
      v20 = 64;
      if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) != 0 )
      {
        StorPortExtendedFunction((unsigned int)(SrbExtension + 86), a1, 0LL, (unsigned int)v9);
        v9 = 1LL;
        v12 = 2LL;
      }
      v22 = *(_BYTE *)(a3 + 1);
      if ( v22 )
      {
        if ( v22 == (_BYTE)v9 )
        {
          *((_QWORD *)&v35 + 1) = v12;
          NVMeControllerAsyncReset(a1, 0, 0LL, 0LL);
        }
        else if ( v22 == (_BYTE)v12 )
        {
          *(_QWORD *)&v35 = 32LL;
        }
        else if ( v22 == 3 )
        {
          if ( IsNVMeControllerOnFatalError(a1) )
          {
            if ( *(_QWORD *)(a1 + 3936) )
              NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v23);
            else
              NVMeControllerAsyncReset(a1, 0, 0LL, 0LL);
          }
          *(_QWORD *)&v35 = 64LL;
        }
        else if ( v22 == 4 )
        {
          *(_QWORD *)&v35 = 128LL;
        }
        else
        {
          v24 = 4096LL;
          if ( v22 == 5 )
            v24 = 256LL;
          *(_QWORD *)&v35 = v24;
        }
      }
      else
      {
        *((_QWORD *)&v35 + 1) = v9;
      }
      SendNVMeEventNotification(a1, &v35, 0LL, 0LL);
      goto LABEL_46;
    }
    if ( (_DWORD)SrbExtension == (_DWORD)v9 )
    {
      v20 = 512;
      if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
        goto LABEL_46;
LABEL_52:
      v28 = (unsigned int)v9;
LABEL_53:
      StorPortExtendedFunction(86LL, a1, 0LL, v28);
      goto LABEL_46;
    }
    if ( (_DWORD)SrbExtension == (_DWORD)v12 )
    {
      LOBYTE(SrbExtension) = *(_BYTE *)(a3 + 1);
      if ( !(_BYTE)SrbExtension )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 2u);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 1u) )
        {
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
          v20 = 4096;
        }
        if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
        {
LABEL_69:
          if ( v20 )
            goto LABEL_46;
          goto LABEL_105;
        }
LABEL_68:
        LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, (unsigned int)v9);
        goto LABEL_69;
      }
      if ( (_BYTE)SrbExtension == (_BYTE)v9 )
      {
        v20 = 512;
        if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
          goto LABEL_46;
        goto LABEL_52;
      }
      if ( (_BYTE)SrbExtension == (_BYTE)v12 )
      {
        v20 = 512;
        if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
          goto LABEL_46;
        goto LABEL_52;
      }
      if ( (_BYTE)SrbExtension == 0xEF )
      {
        v20 = 4096;
        if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
          goto LABEL_46;
        goto LABEL_68;
      }
    }
    else
    {
      if ( (_DWORD)SrbExtension == 6 )
      {
        v29 = *(_BYTE *)(a3 + 1);
        if ( v29 )
        {
          LOBYTE(SrbExtension) = v29 - v9;
          if ( (unsigned __int8)(v29 - v9) > (unsigned __int8)v9 )
            goto LABEL_105;
          v20 = 512;
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            goto LABEL_46;
        }
        else
        {
          v20 = 64;
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            goto LABEL_46;
        }
        v28 = 0LL;
        goto LABEL_53;
      }
      if ( (_DWORD)SrbExtension == 7 )
      {
        if ( !*(_QWORD *)(a1 + 3936) || *(_BYTE *)(a3 + 1) != (_BYTE)v9 )
        {
          if ( (*(_DWORD *)(a1 + 12) & 4) != 0 && *(_BYTE *)(a3 + 1) == 0xFE && v21 == -48 )
          {
            v20 = 4096;
            if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
              StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
LABEL_46:
            v36 = 0LL;
            v37 = 0LL;
            LOBYTE(SrbExtension) = NVMeAllocateDmaBufferEx(a1, 0, 1, v20, (__int64 *)&v36, &v37);
            v26 = v36;
            if ( v36 )
            {
              if ( v13 )
              {
                if ( *(_BYTE *)(a2 + 2) == 40 )
                  v27 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
                else
                  v27 = *(_BYTE *)(a2 + 7);
                if ( (unsigned int)v27 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v27 + 1672) )
                {
                  _mm_lfence();
                  v26 = v36;
                  v30 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v27 + 1672) + 16LL);
                }
                else
                {
                  v30 = 0;
                }
                if ( v20 >> 2 )
                  memset(v26, 0, 4LL * (v20 >> 2));
                LOBYTE(v25) = v21;
                v34 = v30;
                v31 = v37;
                BuildGetLogPageCommand(a1, v10, v25, v20, v37, v34, 0LL, 0);
                *(_BYTE *)(v10 + 4225) |= 4u;
                *(_QWORD *)(v10 + 4192) = NVMeGetLogPageCompletion;
                *(_QWORD *)(v10 + 4160) = v36;
                *(_QWORD *)(v10 + 4168) = v31;
                *(_DWORD *)(v10 + 4208) = v20;
                LOBYTE(SrbExtension) = ProcessCommand(a1, (__int64)(v13 + 8));
              }
              return SrbExtension;
            }
            goto LABEL_105;
          }
          v20 = 512;
          if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) == 0 )
            goto LABEL_46;
          goto LABEL_52;
        }
        if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) != 0 )
          StorPortExtendedFunction(86LL, a1, 0LL, (unsigned int)v9);
        LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v8);
      }
    }
LABEL_105:
    if ( v13 )
    {
      LODWORD(SrbExtension) = *(_DWORD *)(a1 + 24);
      if ( (SrbExtension & 0x10) == 0 )
      {
        *v13 = 0;
        LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, (__int64)v13);
      }
    }
    return SrbExtension;
  }
  v32 = *(_WORD *)(v10 + 4218);
  *(_BYTE *)(v10 + 4225) |= 8u;
  LOBYTE(SrbExtension) = 0;
  if ( (v32 & 0xE00) == 0x200 )
  {
    LOBYTE(SrbExtension) = v32 & 0xFE;
    if ( (v32 & 0x1FE) == 0xA )
      v4 = 0;
  }
  if ( ((unsigned __int8)v12 & *(_BYTE *)(a1 + 21)) != 0 )
    LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, (unsigned int)v9);
  if ( v4 )
    goto LABEL_105;
  return SrbExtension;
}
