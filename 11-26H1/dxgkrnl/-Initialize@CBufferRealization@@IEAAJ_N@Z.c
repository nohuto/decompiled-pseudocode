/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x140026CE0
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x140026ABC (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403EA390 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CBufferRealization::Initialize(CBufferRealization *this, char a2)
{
  __int64 Win32kImportTable; // rax
  NTSTATUS v5; // ebx
  int v6; // ecx
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  PVOID v8; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(char *))(Win32kImportTable + 40))((char *)this + 72);
  if ( v5 >= 0 )
  {
    v6 = *((_DWORD *)this + 6);
    if ( v6 == 2 || (unsigned int)(v6 - 3) <= 1 )
    {
      if ( a2 )
      {
        ObfReferenceObject(*((PVOID *)this + 4));
        v8 = (PVOID)*((_QWORD *)this + 4);
      }
      else
      {
        Object = 0LL;
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
        v5 = ObReferenceObjectByHandle(*((HANDLE *)this + 4), 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
        v8 = Object;
      }
      *((_QWORD *)this + 8) = v8;
      *((_QWORD *)this + 4) = 0LL;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v5;
}
