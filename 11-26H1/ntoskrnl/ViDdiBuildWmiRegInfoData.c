/*
 * XREFs of ViDdiBuildWmiRegInfoData @ 0x140C48CA4
 * Callers:
 *     ViDdiDispatchWmiRegInfoEx @ 0x140C48FD8 (ViDdiDispatchWmiRegInfoEx.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ViDdiBuildWmiRegInfoData(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  void *v5; // rcx

  if ( a2 )
  {
    *(_DWORD *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(GUID *)(a2 + 24) = GUID_VERIFIER_WMI_INTERFACE;
  }
  result = 56LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a2 + 8) = 56;
      *(_WORD *)(a2 + 56) = ViDdiWmiMofKey.Length;
      *(_WORD *)(a2 + 58) = ViDdiWmiMofKey.Length;
      *(_QWORD *)(a2 + 64) = a2 + 72;
      memmove((void *)(a2 + 72), ViDdiWmiMofKey.Buffer, ViDdiWmiMofKey.Length);
    }
    v4 = (ViDdiWmiMofKey.Length + 73) & 0xFFFFFFFE;
    if ( a2 )
    {
      *(_DWORD *)(a2 + 12) = v4;
      *(_WORD *)(v4 + a2) = ViDdiWmiMofResourceName.Length;
      *(_WORD *)(v4 + a2 + 2) = ViDdiWmiMofResourceName.Length;
      v5 = (void *)((unsigned int)v4 + a2 + 16);
      *(_QWORD *)(v4 + a2 + 8) = v5;
      memmove(v5, ViDdiWmiMofResourceName.Buffer, ViDdiWmiMofResourceName.Length);
    }
    result = (unsigned int)v4 + ViDdiWmiMofResourceName.Length + 16;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = result;
  }
  return result;
}
