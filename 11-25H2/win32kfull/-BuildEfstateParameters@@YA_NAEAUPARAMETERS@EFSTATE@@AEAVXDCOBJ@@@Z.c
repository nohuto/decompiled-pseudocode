/*
 * XREFs of ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400B7C98
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400B8D04 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x140101BF8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     <none>
 */

bool __fastcall BuildEfstateParameters(struct EFSTATE::PARAMETERS *a1, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  _DWORD *v6; // rbx
  bool result; // al
  int v8; // ebp
  unsigned int CurrentThreadDpiAwarenessContext; // ecx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  DC::QuickInitXform(*(_QWORD *)a2, &v16, 1026LL);
  if ( !v16 )
    return 0;
  v4 = *(unsigned int *)(v16 + 32);
  v5 = *(_OWORD *)(v16 + 16);
  v6 = *(_DWORD **)(*(_QWORD *)a2 + 48LL);
  *(_OWORD *)a1 = *(_OWORD *)v16;
  *((_OWORD *)a1 + 1) = v5;
  *((_DWORD *)a1 + 8) = v4;
  if ( !v6 )
    return 0;
  v8 = v6[542];
  *((_DWORD *)a1 + 11) = v6[453];
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v4);
  if ( (v6[10] & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v10 = (unsigned int)v6[540];
  *((_DWORD *)a1 + 9) = v10;
  v11 = W32GetCurrentThreadDpiAwarenessContext(v10);
  v12 = v6[10] & 1;
  if ( v12 && (v11 & 0xF) - 1 > 1 )
    v13 = (v11 >> 8) & 0x1FF;
  else
    v13 = v6[541];
  v14 = v6[531] == 2;
  *((_DWORD *)a1 + 10) = v13;
  *((_BYTE *)a1 + 50) = v12;
  *((_BYTE *)a1 + 49) = BYTE1(v8) & 1;
  v15 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 48) = v14;
  result = 1;
  *((_BYTE *)a1 + 51) = (v8 & 0x2000) != 0;
  *((_BYTE *)a1 + 52) = *(_DWORD *)(*(_QWORD *)(v15 + 976) + 208LL) == 1;
  return result;
}
