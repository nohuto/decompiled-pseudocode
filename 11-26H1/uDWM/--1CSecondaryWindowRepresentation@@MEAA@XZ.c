/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18006580C
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x1800657C0 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18002AB54 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18002CD00 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800BFACC (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rax
  __int64 v9; // r9
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v5 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v6 )
    CBaseObject::Release(v6);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v8 = *((_QWORD *)this + 4);
    if ( v8 )
      v9 = *(_QWORD *)(v8 + 40);
    else
      v9 = 0LL;
    McTemplateU0pp_EtwEventWriteTransfer(v6, &RemoveSecondaryWindowRepresentation_Destroy, this, v9);
  }
  if ( *((_BYTE *)this + 160) )
    CWindowData::RemoveSecondaryWindowRepresentation(*((CWindowData **)this + 4), (__m128i *)this, a3, a4);
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v11 )
    CBaseObject::Release(v11);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 28);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 27);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 16);
  CBaseObject::~CBaseObject(this);
}
