/*
 * XREFs of HvlGetReferenceTimeUsingTscPage @ 0x1404113A0
 * Callers:
 *     HvlGetReferenceTime @ 0x140411360 (HvlGetReferenceTime.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlGetReferenceTimeUsingTscPage(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 result; // rax

  if ( *(_DWORD *)HvlpReferenceTscPage )
  {
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
    }
    else
    {
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      {
        _mm_lfence();
      }
      else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    v3 = *((_QWORD *)HvlpReferenceTscPage + 2)
       + (((v2 | (a2 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
  }
  else
  {
    v3 = __readmsr(0x40000020u);
  }
  result = v3;
  if ( a1 )
    *a1 = *(_DWORD *)HvlpReferenceTscPage;
  return result;
}
