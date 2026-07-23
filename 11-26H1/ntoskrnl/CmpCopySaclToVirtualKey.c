/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x140861014
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeSecurityDescriptor @ 0x1408C4C3C (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A98F90 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140AA97C0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140B153E0 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  bool v8; // zf
  unsigned int v9; // r14d
  void *v10; // rsi
  __int64 v11; // r13
  __int64 CellPaged; // rax
  NTSTATUS SaclSecurityDescriptor; // ebx
  __int64 v14; // r8
  BOOLEAN v15; // r12
  __int64 CellFlat; // rax
  _WORD *v17; // rsi
  __int64 v18; // r12
  unsigned int v20; // [rsp+40h] [rbp-41h]
  int v21; // [rsp+44h] [rbp-3Dh] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-31h] BYREF
  PSID Owner; // [rsp+58h] [rbp-29h] BYREF
  PACL Sacl; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h] BYREF
  __int64 v27; // [rsp+70h] [rbp-11h]
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v29; // [rsp+98h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+E0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+77h]

  v32 = a4;
  v4 = *(_DWORD *)(a4 + 44);
  v5 = *(unsigned int *)(a2 + 44);
  SaclPresent = 0;
  v29 = 0LL;
  SaclDefaulted = 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v23[0] = -1;
  v9 = -1;
  v22[0] = -1;
  v10 = 0LL;
  v21 = -1;
  v11 = 0LL;
  v23[1] = 0;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v22[1] = 0;
  Sacl = 0LL;
  Src = 0LL;
  v20 = v4;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v5, v23);
  v27 = CellPaged;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(CellPaged + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor < 0 )
    goto LABEL_32;
  v15 = SaclPresent;
  if ( !SaclPresent )
    goto LABEL_23;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a3, v20, v22);
  else
    CellFlat = HvpGetCellPaged(a3);
  v17 = (_WORD *)(CellFlat + 20);
  v11 = CellFlat;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(CellFlat + 20));
  if ( SaclSecurityDescriptor >= 0 )
  {
    WORD1(SecurityDescriptor[0]) = v17[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v15, Sacl, SaclDefaulted);
    if ( SaclSecurityDescriptor >= 0 )
    {
      SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v17, &Owner, &SaclDefaulted);
      if ( SaclSecurityDescriptor >= 0 )
      {
        SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
        if ( SaclSecurityDescriptor >= 0 )
        {
          SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v17, &Owner, &SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v17, &SaclPresent, &Sacl, &SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                           SecurityDescriptor,
                                           SaclPresent,
                                           Sacl,
                                           SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = SeCaptureSecurityDescriptor(SecurityDescriptor, (__int64)&Src);
                  if ( SaclSecurityDescriptor < 0
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, v20), SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v11 + 4)),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v11 + 8)),
                        SaclSecurityDescriptor < 0) )
                  {
                    v10 = Src;
                  }
                  else
                  {
                    v10 = Src;
                    v18 = v32;
                    SaclSecurityDescriptor = CmpGetSecurityDescriptorNodeEx(a3, Src, 0, (__int64)&v21);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      CmpFreeSecurityDescriptor(a3);
                      v9 = -1;
                      *(_DWORD *)(v18 + 44) = v21;
LABEL_23:
                      SaclSecurityDescriptor = 0;
                      goto LABEL_24;
                    }
                    v9 = v21;
                  }
LABEL_24:
                  if ( v10 )
                  {
                    LOBYTE(v14) = 1;
                    SeReleaseSecurityDescriptor(v10, 0LL, v14);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, v22);
    else
      HvpReleaseCellPaged(a3, v22);
  }
LABEL_32:
  if ( v27 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v23);
  }
  if ( v9 != -1 )
    CmpDereferenceSecurityNode(a3, v9);
  return (unsigned int)SaclSecurityDescriptor;
}
