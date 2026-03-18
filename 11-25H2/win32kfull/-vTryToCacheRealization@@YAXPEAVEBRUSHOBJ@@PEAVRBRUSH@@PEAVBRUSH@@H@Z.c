/*
 * XREFs of ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1400F6B70
 * Callers:
 *     BRUSHOBJ_pvGetRbrush @ 0x1400F6270 (BRUSHOBJ_pvGetRbrush.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1400F7764 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14032186C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vTryToCacheRealization(struct EBRUSHOBJ *a1, struct RBRUSH *a2, struct BRUSH *a3, int a4)
{
  __int64 v8; // rbp
  Gre::Base *v9; // rcx
  unsigned int v10; // ecx

  v8 = HmgPentryFromPobj(a3);
  if ( *((_DWORD *)Gre::Base::Globals(v9) + 712)
    || (*(_DWORD *)a3 & 0x800000) == 0
    || !*((_DWORD *)a2 + 3)
    || ((*(_DWORD *)(v8 + 8) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
  {
    *(_DWORD *)a2 = 1;
    if ( !*((_DWORD *)a3 + 24) && !_InterlockedExchange((volatile __int32 *)a3 + 24, 1) )
    {
      *(_DWORD *)a2 = 2;
      v10 = *((_DWORD *)a3 + 10) | 0x40000000;
      if ( a4 != 1 )
        v10 = *((_DWORD *)a3 + 10) & 0xBFFFFFFF;
      *((_DWORD *)a3 + 10) = v10;
      *((_DWORD *)a3 + 26) = *((_DWORD *)a1 + 13);
      *((_DWORD *)a3 + 27) = *((_DWORD *)a1 + 11);
      *((_DWORD *)a3 + 28) = *((_DWORD *)a1 + 10);
      *((_QWORD *)a3 + 15) = a2;
      *((_QWORD *)a3 + 16) = *(_QWORD *)(*((_QWORD *)a1 + 10) + 48LL);
      *((_DWORD *)a3 + 29) = *((_DWORD *)a1 + 7);
      _InterlockedExchange((volatile __int32 *)a3 + 25, *((_DWORD *)a1 + 12));
    }
  }
}
