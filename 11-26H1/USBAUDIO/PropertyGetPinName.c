/*
 * XREFs of PropertyGetPinName @ 0x14003C180
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyNW @ 0x14000D6C4 (RtlStringCchCopyNW.c)
 *     RegistryReadName @ 0x14003C314 (RegistryReadName.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, wchar_t *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 Length; // rdi
  PKSFILTER FilterFromIrp; // rax
  const KSFILTER_DESCRIPTOR *Descriptor; // rdx
  __int64 v10; // rcx
  _QWORD *Context; // rbp
  int v12; // eax
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r11
  const GUID *v18; // rdx
  NTSTATUS Name; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // edx
  unsigned __int64 v24; // r10
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v25 = 0;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( !FilterFromIrp )
    return v6;
  Descriptor = FilterFromIrp->Descriptor;
  v10 = *(unsigned int *)(a2 + 24);
  if ( (unsigned int)v10 >= FilterFromIrp->Descriptor->PinDescriptorsCount )
    return v6;
  Context = FilterFromIrp->Context;
  v12 = 0;
  PinDescriptors = Descriptor->PinDescriptors;
  v14 = 22 * v10;
  v15 = Context[2];
  v16 = *(_DWORD *)(v15 + 192);
  v17 = *(_QWORD *)(v15 + 200);
  if ( v16 )
  {
    while ( *(_DWORD *)(v17 + 84) != (_DWORD)v10 )
    {
      v17 += 168LL;
      if ( ++v12 >= v16 )
        goto LABEL_6;
    }
    v21 = *(unsigned __int16 *)(v17 + 112);
    if ( (_WORD)v21 )
    {
      if ( (_DWORD)Length )
      {
        v22 = v21 + 2;
        if ( v21 + 2 >= Length )
          v22 = Length;
        v25 = v22;
        v6 = RtlStringCchCopyNW(
               a3,
               Length >> 1,
               *(STRSAFE_PCNZWCH *)(v17 + 120),
               (unsigned __int64)*(unsigned __int16 *)(v17 + 112) >> 1);
        if ( (v6 & 0x80000000) != 0 )
          goto LABEL_17;
      }
      else
      {
        v25 = v21 + 2;
      }
      v6 = (unsigned int)Length < *(unsigned __int16 *)(v17 + 112) ? 0x80000005 : 0;
LABEL_10:
      a1->IoStatus.Information = v25;
      return v6;
    }
  }
LABEL_6:
  v18 = (&PinDescriptors->PinDescriptor.Name)[v14];
  if ( v18 || (v18 = (&PinDescriptors->PinDescriptor.Category)[v14]) != 0LL )
  {
    Name = RegistryReadName((_DWORD)Context, (_DWORD)v18, Length, (_DWORD)a3, (__int64)&v25);
  }
  else
  {
    v23 = *(_DWORD *)(v15 + 32);
    if ( !(_DWORD)Length )
      return v6;
    v24 = Length;
    if ( 2 * (unsigned __int64)(unsigned int)(v23 + 1) < Length )
      LODWORD(Length) = 2 * v23 + 2;
    v25 = Length;
    Name = RtlStringCchCopyNW(a3, v24 >> 1, *(STRSAFE_PCNZWCH *)(v15 + 24), *(unsigned int *)(v15 + 32));
  }
  v6 = Name;
  if ( Name >= 0 )
    goto LABEL_10;
LABEL_17:
  if ( v6 == -2147483643 || v6 == -1073741789 )
    goto LABEL_10;
  return v6;
}
