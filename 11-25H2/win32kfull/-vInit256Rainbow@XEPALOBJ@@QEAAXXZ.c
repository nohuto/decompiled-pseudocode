/*
 * XREFs of ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1400CEEA8
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1400CD87C (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1400CEFC8 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

void __fastcall XEPALOBJ::vInit256Rainbow(XEPALOBJ *this)
{
  char v1; // dl
  char v2; // r8
  char v3; // r11
  __int64 v4; // r9
  __int64 v6; // r10
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbp
  signed __int64 v9; // rsi
  Gre::Base *v10; // rax
  __int64 v11; // rcx
  Gre::Base *v12; // rdi
  int v13; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  HIBYTE(v13) = 0;
  v4 = 0LL;
  v6 = 256LL;
  do
  {
    LOBYTE(v13) = v3;
    BYTE1(v13) = v2;
    BYTE2(v13) = v1;
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = v13;
    v3 += 32;
    if ( !v3 )
    {
      v2 += 32;
      if ( !v2 )
        v1 += 64;
    }
    v4 += 4LL;
    --v6;
  }
  while ( v6 );
  XEPALOBJ::vInit256Default(this);
  v8 = Gre::Base::Globals(v7);
  v9 = *((_QWORD *)v8 + 470);
  if ( v9 )
    goto LABEL_5;
  v10 = (Gre::Base *)Win32AllocPool(0x8000LL, 1650946631LL);
  v11 = *(_QWORD *)this;
  v12 = v10;
  if ( v10 )
  {
    MakeITable(v10, *(struct RGBX **)(v11 + 112), 256);
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 470, (signed __int64)v12, 0LL);
    if ( v9 )
      Win32FreePool(v12);
    else
      v9 = (signed __int64)v12;
LABEL_5:
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
    *(_QWORD *)(*(_QWORD *)this + 104LL) = v9;
    return;
  }
  *(_QWORD *)(v11 + 104) = 0LL;
}
