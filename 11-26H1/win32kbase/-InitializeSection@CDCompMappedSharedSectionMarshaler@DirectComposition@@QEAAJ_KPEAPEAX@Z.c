/*
 * XREFs of ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1400B4574
 * Callers:
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1400B44EC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(
        DirectComposition::CDCompMappedSharedSectionMarshaler *this,
        __int64 a2,
        void **a3)
{
  bool v3; // zf
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  NTSTATUS v9; // eax
  void *v11; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 7) == 0LL;
  Handle = 0LL;
  if ( v3 )
  {
    v8 = 0LL;
    v7 = (*(__int64 (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *, __int64, HANDLE *))(*(_QWORD *)this + 336LL))(
           this,
           a2,
           &Handle);
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(Handle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
      v8 = Object;
      v7 = v9;
    }
    v11 = 0LL;
    if ( v7 < 0 || (v7 = ObOpenObjectByPointer(v8, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &v11), v7 < 0) )
    {
      if ( v8 )
        ObfDereferenceObject(v8);
    }
    else
    {
      *a3 = v11;
      *((_QWORD *)this + 8) = a2;
      *((_QWORD *)this + 7) = v8;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
