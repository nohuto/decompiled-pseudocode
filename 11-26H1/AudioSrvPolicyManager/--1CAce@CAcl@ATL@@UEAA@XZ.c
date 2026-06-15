/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180022AC8
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x180022AB0 (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x18004A3F4 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x18004A490 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  volatile signed __int32 *v2; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx

  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  v2 = (volatile signed __int32 *)((char *)this[15] - 24);
  this[1] = &ATL::CSid::`vftable';
  if ( _InterlockedDecrement(v2 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 8LL))(*(_QWORD *)v2);
  v3 = (volatile signed __int32 *)((char *)this[14] - 24);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)((char *)this[13] - 24);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)((char *)this[12] - 24);
  if ( _InterlockedDecrement(v5 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
}
