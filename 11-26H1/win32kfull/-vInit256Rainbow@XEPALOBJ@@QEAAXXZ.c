/*
 * XREFs of ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x14015744C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x14015755C (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1401575D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x140157684 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
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
  __int64 v9; // r8
  signed __int64 v10; // rsi
  unsigned __int8 *v11; // rax
  __int64 v12; // rcx
  unsigned __int8 *v13; // rbx
  int v14; // [rsp+50h] [rbp+18h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  HIBYTE(v14) = 0;
  v4 = 0LL;
  v6 = 256LL;
  do
  {
    LOBYTE(v14) = v3;
    BYTE1(v14) = v1;
    BYTE2(v14) = v2;
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = v14;
    v3 += 32;
    if ( !v3 )
    {
      v1 += 32;
      if ( !v1 )
        v2 += 64;
    }
    v4 += 4LL;
    --v6;
  }
  while ( v6 );
  XEPALOBJ::vInit256Default(this);
  v8 = Gre::Base::Globals(v7);
  v10 = *((_QWORD *)v8 + 483);
  if ( v10 )
    goto LABEL_5;
  v11 = (unsigned __int8 *)Win32AllocPool(0x8000LL, 1650946631LL, v9);
  v12 = *(_QWORD *)this;
  v13 = v11;
  if ( v11 )
  {
    MakeITable(v11, *(struct RGBX **)(v12 + 112), 256);
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 483, (signed __int64)v13, 0LL);
    if ( v10 )
      Win32FreePool(v13);
    else
      v10 = (signed __int64)v13;
LABEL_5:
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
    *(_QWORD *)(*(_QWORD *)this + 104LL) = v10;
    return;
  }
  *(_QWORD *)(v12 + 104) = 0LL;
}
