/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x14085AD20
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140486620 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1404C83A0 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeSecurityDescriptor @ 0x1408BE66C (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1409F8160 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A95B60 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140AAC210 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140B13920 (RtlGetGroupSecurityDescriptor.c)
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
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r12
  unsigned int v22; // [rsp+40h] [rbp-41h]
  int v23; // [rsp+44h] [rbp-3Dh] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-31h] BYREF
  PSID Owner; // [rsp+58h] [rbp-29h] BYREF
  PACL Sacl; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-11h]
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v31; // [rsp+98h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+E0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v34; // [rsp+F8h] [rbp+77h]

  v34 = a4;
  v4 = *(_DWORD *)(a4 + 44);
  v5 = *(unsigned int *)(a2 + 44);
  SaclPresent = 0;
  v31 = 0LL;
  SaclDefaulted = 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v25[0] = -1;
  v9 = -1;
  v24[0] = -1;
  v10 = 0LL;
  v23 = -1;
  v11 = 0LL;
  v25[1] = 0;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v24[1] = 0;
  Sacl = 0LL;
  Src = 0LL;
  v22 = v4;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v5, v25);
  v29 = CellPaged;
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
    CellFlat = HvpGetCellFlat(a3, v22, v24);
  else
    CellFlat = HvpGetCellPaged(a3);
  v17 = (_WORD *)(CellFlat + 20);
  v11 = CellFlat;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(CellFlat + 20));
  if ( SaclSecurityDescriptor >= 0 )
  {
    LOBYTE(v19) = SaclDefaulted;
    LOBYTE(v18) = v15;
    WORD1(SecurityDescriptor[0]) = v17[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v18, Sacl, v19);
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
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, v22), SaclSecurityDescriptor < 0)
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
                    v20 = v34;
                    SaclSecurityDescriptor = CmpGetSecurityDescriptorNodeEx(a3, Src, 0, (__int64)&v23);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      CmpFreeSecurityDescriptor(a3);
                      v9 = -1;
                      *(_DWORD *)(v20 + 44) = v23;
LABEL_23:
                      SaclSecurityDescriptor = 0;
                      goto LABEL_24;
                    }
                    v9 = v23;
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
      HvpReleaseCellFlat(a3, v24);
    else
      HvpReleaseCellPaged(a3, v24);
  }
LABEL_32:
  if ( v29 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
  if ( v9 != -1 )
    CmpDereferenceSecurityNode(a3, v9);
  return (unsigned int)SaclSecurityDescriptor;
}
