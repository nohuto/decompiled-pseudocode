/*
 * XREFs of ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1400A9B44
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400565EC (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenExternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  volatile signed __int32 *v7; // rdi
  int v8; // ebx
  volatile signed __int32 *v9; // rbp
  bool v10; // sf
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+38h] [rbp-30h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a4, 2u, ExCompositionObjectType, 1, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = (volatile signed __int32 *)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v7 = v9;
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v9 + 1) + 16LL))(*((_QWORD **)v9 + 1)) != 1 )
      {
        v8 = -1073741788;
        v7 = 0LL;
      }
      v10 = v8 < 0;
      if ( v8 >= 0 )
        goto LABEL_6;
    }
    else
    {
      v8 = -1073741816;
    }
    ObfDereferenceObject((PVOID)v9);
    return (unsigned int)v8;
  }
  v10 = v8 < 0;
LABEL_6:
  if ( v10 )
    v7 = 0LL;
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)v7 + 9) == a3 )
    {
      if ( _InterlockedCompareExchange(v7 + 15, 1, 0) )
      {
        ObfDereferenceObject((PVOID)v7);
        return (unsigned int)-1073741790;
      }
      else
      {
        v8 = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
               this,
               (DirectComposition *)a3,
               (char *)v7,
               &v13);
        if ( v8 >= 0 )
          return (unsigned int)DirectComposition::CApplicationChannel::RegisterExternalResource(this, v13, a2, a3, 2);
      }
    }
    else
    {
      ObfDereferenceObject((PVOID)v7);
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v8;
}
