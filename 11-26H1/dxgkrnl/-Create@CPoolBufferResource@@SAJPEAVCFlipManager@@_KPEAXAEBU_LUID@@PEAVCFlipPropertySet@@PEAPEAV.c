/*
 * XREFs of ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x140044E14
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140044CF8 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x14004509C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1400452F0 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403EA390 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        struct CFlipManager *a1,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5,
        struct CPoolBufferResourceState **a6)
{
  CFlipResource *v7; // rdi
  PVOID v8; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  NTSTATUS v17; // eax
  CFlipResource *Pool2; // rax
  __int64 v19; // rax
  char v20; // cl
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v23; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  Object = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  v13 = ObReferenceObjectByHandle(a3, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v14 = Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( v15 >= 0 )
    {
      v23 = 0LL;
      v17 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v23, 0LL);
      v8 = v23;
      v15 = v17;
      if ( v17 >= 0 )
      {
        Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 96LL, 1919042374LL);
        v7 = Pool2;
        if ( Pool2 )
        {
          CFlipResource::CFlipResource(Pool2, a2, a5);
          *((_QWORD *)v7 + 6) = a1;
          *(_QWORD *)v7 = &CPoolBufferResource::`vftable';
          *((_QWORD *)v7 + 7) = v14;
          *((_QWORD *)v7 + 8) = v8;
          *((struct _LUID *)v7 + 9) = *a4;
          *((_DWORD *)v7 + 20) = 0;
          *((_QWORD *)v7 + 11) = _InterlockedIncrement64(&CPoolBufferResource::s_nextUniqueId);
          v19 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
          if ( v19 )
          {
            v20 = *(_BYTE *)(v19 + 32);
            *(_QWORD *)v19 = &CFlipResourceState::`vftable';
            *(_QWORD *)(v19 + 24) = v7;
            *(_BYTE *)(v19 + 32) = v20 & 0xF0 | 1;
            *(_QWORD *)(v19 + 16) = v19 + 8;
            *(_QWORD *)(v19 + 8) = v19 + 8;
            ++*(_DWORD *)(*(_QWORD *)(v19 + 24) + 24LL);
            *(_QWORD *)v19 = &CPoolBufferResourceState::`vftable';
            *a6 = (struct CPoolBufferResourceState *)v19;
          }
          else
          {
            v15 = -1073741801;
          }
          goto LABEL_6;
        }
        v7 = 0LL;
        v15 = -1073741801;
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_6:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v7 )
    CFlipResource::Release(v7);
  return (unsigned int)v15;
}
