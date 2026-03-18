/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x140223E70
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall XEPALOBJ::vGetEntriesFrom(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // r11d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int v19; // [rsp+28h] [rbp+28h]
  unsigned int v20; // [rsp+28h] [rbp+28h]

  result = (unsigned __int64)&retaddr;
  v7 = *(_DWORD *)(a2 + 28);
  if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
    v8 = *(_DWORD *)(a3 + 28);
  else
    v8 = 0;
  v9 = a5;
  if ( a5 )
  {
    if ( v8 )
    {
      do
      {
        v10 = (unsigned int)(v9 - 1);
        v9 = v10;
        v11 = (unsigned int)v10;
        v12 = *(unsigned __int16 *)(a4 + 2 * v10);
        if ( v12 >= v7 )
          v12 %= v7;
        v13 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v12);
        v19 = v13;
        if ( HIBYTE(v13) == 2 )
        {
          v13 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= v8 )
            v13 = (unsigned __int16)v13 % v8;
          v19 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v13);
        }
        HIBYTE(v19) = 0;
        result = v19;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 4 * v11) = v19;
      }
      while ( v9 );
    }
    else
    {
      do
      {
        v14 = (unsigned int)(v9 - 1);
        v9 = v14;
        v15 = (unsigned int)v14;
        v16 = *(unsigned __int16 *)(a4 + 2 * v14);
        if ( v16 >= v7 )
          v16 %= v7;
        v17 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v16);
        v20 = v17;
        if ( HIBYTE(v17) == 2 )
          v20 = dword_140370B60[v17 & 0xF];
        HIBYTE(v20) = 0;
        result = v20;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 4 * v15) = v20;
      }
      while ( v9 );
    }
  }
  return result;
}
