/*
 * XREFs of HalpQueryProfileSource @ 0x140435CE8
 * Callers:
 *     HalpQueryProfileInformation @ 0x140B1B8D8 (HalpQueryProfileInformation.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpQueryProfileSource(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned __int8 v5; // al
  __int64 i; // r8
  __int64 result; // rax
  unsigned __int16 v8; // dx
  char v9; // r9
  int v10; // ecx

  if ( a1 < 0x18 )
  {
    *a3 = 24;
    return 3221225476LL;
  }
  else
  {
    v5 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
    for ( i = HalpProfileSourceDescriptorListHead; ; i = *(_QWORD *)i )
    {
      if ( (__int64 *)i == &HalpProfileSourceDescriptorListHead )
      {
        HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v5);
        result = 3221225659LL;
        *a3 = 0;
        return result;
      }
      if ( *(_DWORD *)(i - 8) == *(_DWORD *)a2 )
        break;
    }
    v8 = 0;
    v9 = 1;
    while ( v8 < *(_WORD *)(i + 24) )
    {
      if ( *(_QWORD *)(i + 8LL * v8 + 32) )
        goto LABEL_13;
      ++v8;
    }
    v9 = 0;
LABEL_13:
    *(_BYTE *)(a2 + 4) = v9;
    if ( *(_DWORD *)(i - 8) || HalpProfileInterface == &DefaultProfileInterface )
      v10 = *(_DWORD *)(i + 16);
    else
      v10 = *(_DWORD *)(296LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
    *(_DWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(i + 288);
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v5);
    result = 0LL;
    *a3 = 24;
  }
  return result;
}
