/*
 * XREFs of KiValidateDpcWatchdogConfiguration @ 0x1405EBBF8
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405EB7C0 (KeUpdateDpcWatchdogConfiguration.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiValidateDpcWatchdogConfiguration(void *Src, size_t Size, int a3, _DWORD *a4)
{
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  char PreviousMode; // [rsp+50h] [rbp+18h]

  if ( a3 == 228 )
  {
    v6 = (_DWORD)Size == 20;
  }
  else
  {
    if ( a3 != 229 )
      goto LABEL_7;
    v6 = (_DWORD)Size == 32;
  }
  if ( !v6 )
    return (unsigned int)-1073741820;
LABEL_7:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)a4 = 0LL;
  *((_OWORD *)a4 + 1) = 0LL;
  v7 = 0;
  if ( PreviousMode )
    RtlCopyFromUser(a4, Src, (unsigned int)Size);
  else
    RtlCopyVolatileMemory(a4, Src, (unsigned int)Size);
  v8 = *a4;
  v9 = (unsigned __int8)*a4;
  if ( !(unsigned __int8)*a4 || v9 > 2 )
    return (unsigned int)-1073741811;
  v10 = a3 - 228;
  if ( v10 )
  {
    if ( v10 == 1 && v9 != 2 )
      return (unsigned int)-1073741811;
  }
  else if ( v9 != 1 || (v8 & 0x7000) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( !(v8 >> 8) || v8 >= 0x8000 )
    return (unsigned int)-1073741811;
  if ( (v8 & 0x100) == 0 )
    a4[1] = KeDpcTimeoutMs;
  if ( (v8 & 0x200) == 0 )
    a4[2] = KeDpcWatchdogPeriodMs;
  if ( (v8 & 0x400) == 0 )
    a4[3] = KeDpcSoftTimeoutMs;
  if ( (v8 & 0x800) == 0 )
    a4[4] = KeDpcCumulativeSoftTimeoutMs;
  if ( (v8 & 0x1000) == 0 )
    a4[5] = KeDpcWatchdogProfileSingleDpcThresholdMs;
  if ( (v8 & 0x2000) == 0 )
    a4[6] = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
  if ( (v8 & 0x4000) == 0 )
    a4[7] = KeDpcWatchdogProfileBufferSizeBytes;
  v11 = a4[1];
  if ( v11 )
  {
    if ( v11 < 0x14 )
      return (unsigned int)-1073741811;
  }
  v12 = a4[2];
  if ( v12 )
  {
    if ( v12 < 0x7D0 )
      return (unsigned int)-1073741811;
  }
  v13 = a4[3];
  if ( v13 )
  {
    if ( v13 < 0x14 || v11 && v13 > v11 )
      return (unsigned int)-1073741811;
  }
  v14 = a4[4];
  if ( v14 )
  {
    if ( v14 < 0x7D0 || v12 && v14 > v12 )
      return (unsigned int)-1073741811;
  }
  v15 = a4[5];
  if ( v15 )
  {
    if ( (v13 || (v13 = a4[1]) != 0) && v15 > v13 )
      return (unsigned int)-1073741811;
  }
  v16 = a4[6];
  if ( v16 )
  {
    if ( (v14 || (v14 = a4[2]) != 0) && v16 > v14 )
      return (unsigned int)-1073741811;
  }
  v17 = a4[7];
  if ( v17 )
  {
    if ( v17 < 0x2000 )
      return (unsigned int)-1073741811;
  }
  return v7;
}
