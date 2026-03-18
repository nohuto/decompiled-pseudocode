/*
 * XREFs of ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14000B280
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14000B04C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 * Callees:
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000BCD4 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall MNInitDrawItemStruct(__int64 a1, int a2, __int64 ***a3, __int64 *a4, int a5, int a6, __int64 a7)
{
  int v10; // r10d
  unsigned int v11; // ebx
  __int64 v12; // rax
  _DWORD *v13; // rdx
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  __int64 result; // rax

  *(_QWORD *)a7 = 1LL;
  v10 = *(_DWORD *)(*a4 + 8);
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 8) = v10;
  v11 = *(_DWORD *)(*a4 + 4);
  *(_DWORD *)(a7 + 16) = v11 & 8 | ((unsigned int)MNDrawHilite(a3, a4) != 0) | ((*(_DWORD *)((**a3)[5] + 40) & 0x10) != 0
                                                                              ? 0x80
                                                                              : 0) | ((v11 & 0x100) != 0 ? 0x40 : 0) | (2 * (v11 & 1)) | (v11 >> 7) & 0x20 | ((v11 & 3) != 0 ? 4 : 0) | ~(*(_DWORD *)((**a3)[5] + 40) << 6) & 0x100;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a3) )
    v12 = 0LL;
  else
    v12 = ***a3;
  *(_QWORD *)(a7 + 24) = v12;
  *(_QWORD *)(a7 + 32) = a1;
  v13 = (_DWORD *)*a4;
  v14 = *(_DWORD *)(*a4 + 68);
  if ( a5 )
    v14 = (unsigned int)(v13[19] - v13[27]) >> 1;
  *(_DWORD *)(a7 + 40) = a6 + v13[16];
  *(_DWORD *)(a7 + 44) = v14;
  v15 = (_DWORD *)*a4;
  if ( a5 )
    v16 = v15[26];
  else
    v16 = v15[18];
  *(_DWORD *)(a7 + 48) = a6 + v16 + v15[16];
  v17 = *a4;
  if ( a5 )
    v18 = *(_DWORD *)(v17 + 108);
  else
    v18 = *(_DWORD *)(v17 + 76);
  *(_DWORD *)(a7 + 52) = v14 + v18;
  result = *a4;
  *(_QWORD *)(a7 + 56) = *(_QWORD *)(*a4 + 56);
  return result;
}
