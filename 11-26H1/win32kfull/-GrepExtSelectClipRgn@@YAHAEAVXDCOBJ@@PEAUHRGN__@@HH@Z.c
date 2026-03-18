/*
 * XREFs of ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x14006D408
 * Callers:
 *     GreExtSelectClipRgn @ 0x140040B5C (GreExtSelectClipRgn.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepExtSelectClipRgn(struct XDCOBJ *this, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  struct REGION *v11; // rax
  struct REGION *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  ULONG v17; // ecx
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  struct REGION *v19; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v20[40]; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  _BYTE v23[160]; // [rsp+88h] [rbp-80h] BYREF

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    v17 = 87;
LABEL_31:
    EngSetLastError(v17);
    return v4;
  }
  if ( !a4 )
  {
    v8 = *(_QWORD *)this;
    v9 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v8 )
    {
      v10 = HmgPentryFromPobj(v9, v8);
    }
    else
    {
      v10 = v8 + 2152;
      *(_OWORD *)(v8 + 2152) = 0LL;
      v22 = 0LL;
      *(_QWORD *)(v8 + 2168) = 0LL;
      *(_DWORD *)(v8 + 2160) = -2147483630;
      *(_QWORD *)(v8 + 2168) = GreEncodeUserModePointer(0LL);
    }
    if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) == 0 )
    {
      v17 = 6;
      goto LABEL_31;
    }
  }
  if ( a2 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v19, a2, 1, 0);
    v11 = v19;
    if ( v19 )
    {
      v4 = DC::iSelect(*(DC **)this, v19, a3);
      if ( v4 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
        v4 = 0;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, this, 1) )
        {
          v12 = XDCOBJ::prgnEffRao((DC **)this);
          if ( GetBaseRustGlobals() )
          {
            BaseRustGlobals = GetBaseRustGlobals();
            v4 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)BaseRustGlobals + 32LL))(((unsigned __int64)v12
                                                                                                  + 24) & -(__int64)(v12 != 0LL));
          }
          else if ( *((_DWORD *)v12 + 12) == 1 )
          {
            v4 = 1;
          }
          else
          {
            v4 = (REGION_CORE::get_sizeScan((struct REGION *)((char *)v12 + 24)) > 0x38) + 2;
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
      }
      v11 = v19;
    }
    if ( !v21 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v19);
      v11 = v19;
    }
    if ( v11 )
      _InterlockedDecrement16((volatile signed __int16 *)v11 + 6);
    PopThreadGuardedObject(v20);
  }
  else if ( a3 == 5 )
  {
    v4 = DC::iSelect(*(DC **)this, 0LL, 5);
    if ( v4 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
      v4 = 0;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, this, 1) )
      {
        v13 = *(_QWORD *)this;
        if ( !*(_QWORD *)(*(_QWORD *)this + 1160LL)
          || (*(_DWORD *)(v13 + 40) & 2) == 0
          || !(unsigned int)DC::bDpiScaledSurface(*(DC **)this) )
        {
          v14 = *(_QWORD *)(v13 + 1144);
        }
        v18 = v14;
        v4 = RGNOBJ::iComplexity((RGNOBJ *)&v18);
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
    }
  }
  return v4;
}
