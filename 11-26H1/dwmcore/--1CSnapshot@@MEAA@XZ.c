/*
 * XREFs of ??1CSnapshot@@MEAA@XZ @ 0x180246110
 * Callers:
 *     ??_ECSnapshot@@MEAAPEAXI@Z @ 0x180246E20 (--_ECSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSnapshot::~CSnapshot(CSnapshot *this)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r11
  __int64 v7; // r8

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  *(_QWORD *)this = &CSnapshot::`vftable';
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = *(_DWORD *)(v4 + 5928);
    v6 = *(_QWORD *)(v4 + 5904);
    if ( v5 )
    {
      do
      {
        if ( v1 == *(_QWORD *)(v6 + 8LL * v2) )
          break;
        ++v2;
      }
      while ( v2 < v5 );
    }
    if ( v2 < v5 )
    {
      if ( v2 < v5 - 1 )
      {
        do
        {
          v7 = v2 + 1;
          *(_QWORD *)(v6 + 8LL * v2++) = *(_QWORD *)(v6 + 8 * v7);
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v4 + 5928) - 1 );
      }
      --*(_DWORD *)(v4 + 5928);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
