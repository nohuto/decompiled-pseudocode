/*
 * XREFs of ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x140056340
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140056510 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenExternalSharedReadResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  volatile signed __int32 *v7; // rdi
  NTSTATUS v8; // ebx
  _QWORD **v9; // rbp
  bool v10; // sf
  __int64 i; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  struct DirectComposition::CResourceMarshaler *v14; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a4, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  if ( v8 < 0 )
  {
    v10 = v8 < 0;
    goto LABEL_6;
  }
  v9 = (_QWORD **)Object;
  if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v8 = -1073741816;
LABEL_24:
    ObfDereferenceObject(v9);
    return (unsigned int)v8;
  }
  v7 = (volatile signed __int32 *)v9;
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v9[1] + 16LL))(v9[1]) != 1 )
  {
    v8 = -1073741788;
    v7 = 0LL;
  }
  v10 = v8 < 0;
  if ( v8 < 0 )
    goto LABEL_24;
LABEL_6:
  if ( v10 )
    v7 = 0LL;
  if ( v8 >= 0 )
  {
    for ( i = *((unsigned int *)v7 + 9); ; LODWORD(i) = dword_14027CC90[i] )
    {
      if ( (unsigned int)i >= 0xA6 )
      {
        ObfDereferenceObject((PVOID)v7);
        return (unsigned int)-1073741811;
      }
      if ( (_DWORD)i == a3 )
        break;
    }
    if ( a3 != 156 )
    {
      _InterlockedCompareExchange(v7 + 14, 1, 0);
      if ( *((_DWORD *)v7 + 14) != 1 )
      {
        ObfDereferenceObject((PVOID)v7);
        return (unsigned int)-1073741790;
      }
      goto LABEL_15;
    }
    _InterlockedCompareExchange(v7 + 14, 2, 0);
    if ( _InterlockedCompareExchange(v7 + 14, 3, 2) != 2 )
    {
      ObfDereferenceObject((PVOID)v7);
      v8 = -1073741790;
    }
    if ( v8 >= 0 )
    {
LABEL_15:
      v8 = DirectComposition::CApplicationChannel::OpenInternalSharedReadResource(
             this,
             a3,
             (const struct DirectComposition::ResourceObject *)v7,
             &v14);
      if ( v8 >= 0 )
        return (unsigned int)DirectComposition::CApplicationChannel::RegisterExternalResource(this, v14, a2, a3, 2);
    }
  }
  return (unsigned int)v8;
}
