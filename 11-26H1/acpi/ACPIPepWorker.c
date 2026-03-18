/*
 * XREFs of ACPIPepWorker @ 0x1400B4B70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIPepEpmNotify @ 0x1400B4270 (ACPIPepEpmNotify.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1400CD164 (ACPIPepPlatformEntryExitNotify.c)
 *     ACPIPepGetNextPlatformNotification @ 0x1400D2428 (ACPIPepGetNextPlatformNotification.c)
 */

void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v4; // rdi
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // r8
  int v8; // esi
  _BYTE v9[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-1Ch] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-18h] BYREF

  v9[0] = 0;
  InputBuffer = 0LL;
  v10 = 0;
  v4 = (struct _FAST_MUTEX *)(a1 + 184);
LABEL_4:
  ExAcquireFastMutex(v4);
  while ( (unsigned __int8)ACPIPepGetNextPlatformNotification(a1, &v10, v9) )
  {
    v5 = v10;
    v6 = *(_DWORD *)(a1 + 244);
    if ( _bittest(&v6, v10) )
    {
      ExReleaseFastMutex(v4);
      LOBYTE(v7) = v9[0];
      ACPIPepPlatformEntryExitNotify(a1, v5, v7);
      goto LABEL_4;
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 280) )
      *(_BYTE *)(a1 + 280) = 0;
    v8 = *(_DWORD *)(a1 + 268);
    if ( *(_DWORD *)(a1 + 264) == v8 )
      break;
    if ( *(_BYTE *)(a1 + 257) )
    {
      ExReleaseFastMutex(v4);
      ACPIPepEpmNotify(a1, v8);
      ExAcquireFastMutex(v4);
      *(_DWORD *)(a1 + 264) = v8;
    }
  }
  if ( *(_BYTE *)(a1 + 281) )
  {
    *(_BYTE *)(a1 + 281) = 0;
    LODWORD(InputBuffer) = 40;
    DWORD2(InputBuffer) = 0;
    BYTE12(InputBuffer) = 0;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v4);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 344), 0, 0);
}
