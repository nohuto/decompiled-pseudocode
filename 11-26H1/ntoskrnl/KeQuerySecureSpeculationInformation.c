/*
 * XREFs of KeQuerySecureSpeculationInformation @ 0x140531AB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     VslGetSecureSpeculationControlInformation @ 0x1405C5B20 (VslGetSecureSpeculationControlInformation.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall KeQuerySecureSpeculationInformation(void *a1, size_t Size, _DWORD *a3)
{
  size_t v3; // rdi
  char PreviousMode; // si
  int SecureSpeculationControlInformation; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  unsigned int Src; // [rsp+50h] [rbp+18h] BYREF

  v3 = (unsigned int)Size;
  Src = 0;
  *a3 = 8;
  if ( (unsigned int)Size < 4 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SecureSpeculationControlInformation = VslGetSecureSpeculationControlInformation();
  v8 = SecureSpeculationControlInformation & 1;
  v9 = v8 != 0;
  Src = v9;
  if ( (SecureSpeculationControlInformation & 2) != 0 )
  {
    v9 = v8 | 2;
    Src = v8 | 2;
  }
  v10 = v8 | 2;
  if ( (SecureSpeculationControlInformation & 2) == 0 )
    v10 = SecureSpeculationControlInformation & 1;
  if ( (SecureSpeculationControlInformation & 4) != 0 )
  {
    v10 |= 4u;
LABEL_11:
    Src = v10;
    v9 = v10;
    goto LABEL_12;
  }
  if ( (SecureSpeculationControlInformation & 8) != 0 )
  {
    v10 |= 8u;
    goto LABEL_11;
  }
LABEL_12:
  if ( (SecureSpeculationControlInformation & 0x100) != 0 )
  {
    v9 = v10 | 0x40;
    Src = v10 | 0x40;
  }
  if ( (SecureSpeculationControlInformation & 0x200) != 0 )
  {
    v9 |= 0x80u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x400) != 0 )
  {
    v9 |= 0x100u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x2000) != 0 )
  {
    v9 |= 0x200u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x4000) != 0 )
  {
    v9 |= 0x400u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x8000) != 0 )
  {
    v9 |= 0x800u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x800) != 0 )
  {
    v9 |= 0x1000u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x1000) != 0 )
  {
    v9 |= 0x2000u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x10000) != 0 )
  {
    v9 |= 0x20u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x20000) != 0 )
  {
    v9 |= 0x10u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x40000) != 0 )
  {
    v9 |= 0x4000u;
    Src = v9;
  }
  if ( (SecureSpeculationControlInformation & 0x80000) != 0 )
    Src = v9 | 0x8000;
  if ( PreviousMode )
    RtlSetUserMemory(a1);
  else
    RtlSetVolatileMemory(a1, 0, v3);
  if ( PreviousMode )
    RtlWriteULongToUser(a1, Src);
  else
    RtlCopyVolatileMemory(a1, &Src, 4uLL);
  return 0LL;
}
