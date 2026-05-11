/*
 * XREFs of PropertyAudioSignalProcessing @ 0x14003DAB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     PropertyAudioSignalProcessingPinValidation @ 0x14003DBB4 (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessing(IRP *a1, __int64 a2, ULONG *a3)
{
  ULONG Length; // ebp
  PKSFILTER FilterFromIrp; // rsi
  __int64 result; // rax
  __int64 v9; // r15
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r12
  unsigned __int64 v11; // rax
  ULONG v12; // edi

  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  result = PropertyAudioSignalProcessingPinValidation(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 1) == 0 )
      return 3221225659LL;
    v9 = 176LL * *(unsigned int *)(a2 + 24);
    PinDescriptors = FilterFromIrp->Descriptor->PinDescriptors;
    v11 = 16LL * *(unsigned int *)((char *)&PinDescriptors[1].PinDescriptor.Interfaces + v9);
    if ( v11 > 0xFFFFFFFF )
      return 3221225860LL;
    v12 = v11 + 8;
    if ( (int)v11 + 8 < (unsigned int)v11 )
    {
      return 3221225860LL;
    }
    else
    {
      if ( !Length )
      {
        result = 2147483653LL;
LABEL_8:
        a1->IoStatus.Information = v12;
        return result;
      }
      if ( Length < v12 )
      {
        result = 3221225507LL;
        goto LABEL_8;
      }
      memmove(a3 + 2, *(const void **)((char *)&PinDescriptors[1].PinDescriptor.MediumsCount + v9), (unsigned int)v11);
      *a3 = v12;
      a3[1] = *(_DWORD *)((char *)&PinDescriptors[1].PinDescriptor.Interfaces + v9);
      result = 0LL;
      a1->IoStatus.Information = v12;
    }
  }
  return result;
}
