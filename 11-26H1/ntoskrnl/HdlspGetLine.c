/*
 * XREFs of HdlspGetLine @ 0x140C52AA8
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140C521F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140C53228 (HdlspPutMore.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x14053E940 (sprintf_s.c)
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     InbvPortGetByte @ 0x140723440 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1407235F4 (InbvPortPollOnly.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HdlspSendStringAtBaud @ 0x140C535CC (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // al
  KSPIN_LOCK *v5; // rcx
  int v6; // edx
  unsigned __int8 v8; // dl
  PKSPIN_LOCK v9; // r10
  char *v10; // rcx
  KSPIN_LOCK v11; // rcx
  KSPIN_LOCK v12; // rax
  KSPIN_LOCK v13; // rax
  char v14; // cl
  PKSPIN_LOCK v15; // r9
  KSPIN_LOCK v16; // rcx
  char *v17; // r9
  __int64 v18; // rax
  char v19; // cl
  PKSPIN_LOCK v20; // rbx
  size_t v21; // r8
  const void *v22; // rdx
  unsigned __int8 v23; // [rsp+40h] [rbp+18h] BYREF

  v23 = 0;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
      KeReleaseSpinLock(HeadlessGlobals, v4);
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
      KeReleaseSpinLock(v5, v4);
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v23) )
          {
            v8 = v23;
          }
          else
          {
            v8 = 0;
            v23 = 0;
          }
          if ( !v8 )
            goto LABEL_32;
          v9 = HeadlessGlobals;
          *(_BYTE *)(HeadlessGlobals[4] + HeadlessGlobals[11]) = v8;
          if ( !*((_BYTE *)v9 + 117) || v23 != 10 )
            break;
          *((_BYTE *)v9 + 117) = 0;
        }
        *((_BYTE *)v9 + 117) = v23 == 13;
        if ( v23 == 10 || v23 == 13 )
          break;
        switch ( v23 )
        {
          case 8u:
          case 0x7Fu:
            if ( v9[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v11 = ++v9[11];
            v12 = v9[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
LABEL_32:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x10u;
            return 0;
          default:
            v10 = (char *)v9[3];
            if ( v9[11] == 78 )
            {
              sprintf_s(v10, 0x50uLL, "\b%c", v23);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v10, 0x50uLL, "%c", v23);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v9 = HeadlessGlobals;
      v11 = HeadlessGlobals[4];
      v12 = HeadlessGlobals[11];
LABEL_35:
      *(_BYTE *)(v11 + v12) = 0;
      v13 = v9[11]++;
      if ( v9[11] != 1 )
      {
        do
        {
          v14 = *(_BYTE *)(v9[4] + v13);
          if ( v14 && v14 != 32 && v14 != 9 )
            break;
          --v13;
        }
        while ( v13 );
      }
      v15 = HeadlessGlobals;
      v16 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v16 + v13) )
        *(_BYTE *)(v16 + v13 + 1) = 0;
      v17 = (char *)v15[4];
      v18 = 0LL;
      v19 = *v17;
      if ( *v17 )
      {
        do
        {
          if ( v19 != 9 && v19 != 32 )
            break;
          v19 = v17[++v18];
        }
        while ( v19 );
        if ( v18 )
          strcpy_s(v17, 0x50uLL, &v17[v18]);
      }
    }
    v20 = HeadlessGlobals;
    v21 = HeadlessGlobals[11];
    v22 = (const void *)HeadlessGlobals[4];
    if ( Size < v21 )
    {
      memmove(a1, v22, Size);
      memmove((void *)v20[4], (const void *)(v20[4] + Size), v20[11] - Size);
      *((_DWORD *)v20 + 12) |= 0x20u;
      v20[11] -= Size;
    }
    else
    {
      memmove(a1, v22, v21);
      *((_DWORD *)v20 + 12) &= ~0x20u;
      v20[11] = 0LL;
    }
    *((_DWORD *)v20 + 12) &= ~0x10u;
    return 1;
  }
}
