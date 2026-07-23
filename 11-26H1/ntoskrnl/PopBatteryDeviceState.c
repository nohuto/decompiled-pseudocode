/*
 * XREFs of PopBatteryDeviceState @ 0x140AFDFA8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(_WORD *a1, __int64 a2)
{
  signed int v4; // ebx
  __int64 v5; // rcx
  _WORD *v6; // rax
  unsigned __int16 Length; // dx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // r10d
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 *v16; // rdi
  wchar_t *v17; // rax
  __int64 *v18; // rbx
  __int128 v19; // xmm0
  UNICODE_STRING String1; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  String1 = 0LL;
  if ( !a1 )
    goto LABEL_23;
  v5 = 0x7FFFLL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v4 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    Length = -2 - 2 * v5;
  else
LABEL_23:
    Length = String1.Length;
  if ( v4 >= 0 )
  {
    if ( Length > 8u
      && ((PsGetCurrentServerSiloGlobals(), (unsigned __int16)v9 >= 8u) && *(_QWORD *)L"\\??\\" == *(_QWORD *)v10
       || (PsGetCurrentServerSiloGlobals(), v12 >= 8) && *(_QWORD *)L"\\\\?\\" == *(_QWORD *)v10) )
    {
      LOWORD(v9) = v9 - 8;
      LOWORD(v11) = (_WORD)v11 - 8;
      String1.Length = v9;
      String1.MaximumLength = (unsigned __int16)v11;
      String1.Buffer = (wchar_t *)(v10 + 8);
      PopAcquireRwLockShared(&PopPolicyDeviceLock, v9, v10 + 8, v11);
      PopAcquireRwLockShared((volatile signed __int64 *)&PopCB, v13, v14, v15);
      v16 = (__int64 *)qword_140F10640;
      if ( (__int64 *)qword_140F10640 == &qword_140F10640 )
        goto LABEL_22;
      do
      {
        v17 = (wchar_t *)(v16[5] + 8);
        *(_QWORD *)&String2.Length = v16[4];
        String2.Length -= 8;
        String2.MaximumLength -= 8;
        v18 = v16;
        String2.Buffer = v17;
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          break;
        v16 = (__int64 *)*v16;
        v18 = 0LL;
      }
      while ( v16 != &qword_140F10640 );
      if ( !v18 )
      {
LABEL_22:
        v4 = -1073741772;
      }
      else if ( *((_DWORD *)v18 + 26) == 3 )
      {
        *(_OWORD *)a2 = *((_OWORD *)v18 + 7);
        *(_OWORD *)(a2 + 16) = *((_OWORD *)v18 + 8);
        *(_DWORD *)(a2 + 32) = *((_DWORD *)v18 + 36);
        v19 = *(_OWORD *)((char *)v18 + 148);
        v4 = 0;
        *(_OWORD *)(a2 + 36) = v19;
      }
      else
      {
        v4 = -1073741661;
      }
      PopReleaseRwLock((struct _KTHREAD *)&PopCB);
      PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v4;
}
