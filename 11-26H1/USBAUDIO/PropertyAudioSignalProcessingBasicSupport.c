/*
 * XREFs of PropertyAudioSignalProcessingBasicSupport @ 0x1400321D0
 * Callers:
 *     <none>
 * Callees:
 *     PropertyAudioSignalProcessingPinValidation @ 0x14003DBB4 (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessingBasicSupport(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 result; // rax

  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  result = PropertyAudioSignalProcessingPinValidation();
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0x200) != 0 )
    {
      if ( v6 >= 4 )
      {
        *(_DWORD *)a3 = 513;
        *(_QWORD *)(a1 + 56) = 4LL;
        if ( v6 >= 0x28 )
        {
          *(_DWORD *)(a3 + 4) = 40;
          *(_QWORD *)(a3 + 24) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(GUID *)(a3 + 8) = GUID_NULL;
          *(_QWORD *)(a1 + 56) = 40LL;
        }
        return 0LL;
      }
      else
      {
        result = 3221225507LL;
        *(_QWORD *)(a1 + 56) = 40LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
