/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400ADB54 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     NtGdiOffsetClipRgn @ 0x140236900 (NtGdiOffsetClipRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400AC900 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall DC::bTightenRao(DC *this)
{
  BOOL v1; // edi
  struct _RECTL *v3; // r15
  __int64 v4; // rax
  REGION *v5; // r8
  REGION *v6; // rdx
  REGION *v7; // rcx
  _BOOL8 v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  _BOOL8 v11; // rax
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // rsi
  _DWORD *v15; // r14
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  BOOL v17; // ecx
  bool v18; // zf
  REGION *v19; // [rsp+20h] [rbp-50h] BYREF
  REGION *v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  REGION *v22; // [rsp+38h] [rbp-38h] BYREF
  REGION *v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+48h] [rbp-28h]
  REGION *v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 143) )
    return v1;
  v3 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v1 = 1;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v4 = *((_QWORD *)this + 143);
  v5 = (REGION *)*((_QWORD *)this + 141);
  v6 = (REGION *)*((_QWORD *)this + 21);
  v7 = (REGION *)*((_QWORD *)this + 20);
  v21 = v4;
  if ( (unsigned __int64)v5 | (unsigned __int64)v7 | (unsigned __int64)v6 )
  {
    v23 = v7;
    v24 = 0LL;
    v8 = v7 != 0LL;
    v11 = v8 + 1;
    *(&v23 + v8) = v6;
    if ( !v6 )
      v11 = v8;
    v12 = v11 + 1;
    *(&v23 + v11) = v5;
    if ( !v5 )
      v12 = v11;
    v20 = (REGION *)*((_QWORD *)this + 144);
    if ( !v20 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
      if ( v19 )
        v20 = v19;
    }
    if ( !v20 )
      goto LABEL_26;
    if ( v12 == 1 )
    {
      v19 = v23;
      v13 = RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v19);
    }
    else
    {
      if ( v12 != 2 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
        v25 = v23;
        v26 = *((_QWORD *)&v24 + 1);
        v22 = (REGION *)v24;
        if ( !v19
          || !RGNOBJ::iCombine((RGNOBJ *)&v19, (struct RGNOBJ *)&v25, (struct RGNOBJ *)&v22, 1)
          || !RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v26, 1) )
        {
          v1 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
LABEL_19:
        if ( !v1 )
          goto LABEL_27;
        REGION::vStamp(v20);
        if ( RGNOBJ::bOffset((RGNOBJ *)&v20, (const struct _POINTL *)this + 129) )
        {
          if ( (unsigned int)RGNOBJ::bRectl((RGNOBJ *)&v21)
            && ((v14 = (_DWORD *)((v21 + 24) & -(__int64)(v21 != 0)),
                 v15 = (_DWORD *)(((unsigned __int64)v20 + 24) & -(__int64)(v20 != 0LL)),
                 !(unsigned __int8)IsBaseRustExportsEnabled<1>())
              ? (v14[7] <= v15[7] && v14[9] >= v15[9] && v14[8] <= v15[8] && v14[10] >= v15[10]
               ? (v17 = 1)
               : (v17 = 0))
              : (BaseRustGlobals = GetBaseRustGlobals(),
                 v17 = (*(__int64 (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)BaseRustGlobals + 16LL))(v14, v15) != 0),
                v17) )
          {
            *((_QWORD *)this + 144) = v20;
            RGNOBJ::vGetSubRect((RGNOBJ *)&v20, v3);
          }
          else
          {
            v19 = 0LL;
            RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
            if ( v19
              && RGNOBJ::iCombine((RGNOBJ *)&v19, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v20, 1)
              && RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v19) )
            {
              *((_QWORD *)this + 144) = v20;
              RGNOBJ::vGetSubRect((RGNOBJ *)&v20, v3);
            }
            else
            {
              v1 = 0;
            }
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
          }
          if ( v1 )
            goto LABEL_6;
LABEL_27:
          v18 = v20 == 0LL;
          *((_QWORD *)this + 144) = 0LL;
          if ( !v18 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
          goto LABEL_6;
        }
LABEL_26:
        v1 = 0;
        goto LABEL_27;
      }
      v22 = v23;
      v19 = (REGION *)v24;
      v13 = RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v19, 1);
    }
    v1 = v13 != 0;
    goto LABEL_19;
  }
  if ( *((_QWORD *)this + 144) )
  {
    v20 = (REGION *)*((_QWORD *)this + 144);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    *((_QWORD *)this + 144) = 0LL;
  }
  RGNOBJ::vGetSubRect((RGNOBJ *)&v21, v3);
LABEL_6:
  v9 = Gre::Base::Globals((Gre::Base *)v8);
  DC::vUpdate_VisRect(this, v9, *((struct REGION **)this + 143));
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v1;
}
