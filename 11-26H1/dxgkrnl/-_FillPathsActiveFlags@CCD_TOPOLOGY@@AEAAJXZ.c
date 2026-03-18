/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x140407824
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14033D2A0 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x14033E9CC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 (__fastcall ***v3)(CCD_BTL *, int *); // rax
  int active; // ebx
  struct D3DKMT_HASH *v6; // [rsp+30h] [rbp-29h] BYREF
  __int128 v7; // [rsp+38h] [rbp-21h]
  __int64 v8; // [rsp+48h] [rbp-11h]
  __int16 v9; // [rsp+50h] [rbp-9h]
  __int128 v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  char v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+84h] [rbp+2Bh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  char v18; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 i; // [rsp+D0h] [rbp+77h] BYREF

  v13 = 1;
  LODWORD(v6) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v2 = 8;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0;
  v15 = 1;
  v16 = 0LL;
  v17 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v6, 8LL);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v6, v2) < v2 )
    {
      WdLogSingleEntry3(6LL, v2, this, *((_QWORD *)this + 8));
      WdLogGlobalForLineNumber = 5767;
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
      return 3221225495LL;
    }
    v18 = 0;
    v3 = (__int64 (__fastcall ***)(CCD_BTL *, int *))CCD_BTL::Global();
    active = CCD_BTL::RetrieveActiveTopology(v3, 0, 1, &v6, &i);
    if ( active >= 0 )
    {
      active = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology((CCD_TOPOLOGY *)&v6, (const struct CCD_TOPOLOGY *)&v6);
      if ( active < 0 )
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v18);
      else
        active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v6);
    }
    if ( active != -1073741789 )
      break;
  }
  if ( active < 0 )
  {
    WdLogSingleEntry3(2LL, active, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 5780;
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)&v6);
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
  return (unsigned int)active;
}
