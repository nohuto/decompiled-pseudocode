/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401AAF08 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x1401B4FA4 (ulCharsetToCodePage.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1401B5198 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1401C4AAC (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x14020C6D0 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 *v5; // rdx
  struct PFF *v6; // rax
  _QWORD *v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  struct PFE *i; // rax
  __int64 v11; // rdx
  struct PFE *v12; // rdi
  unsigned int v13; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h]
  unsigned __int8 v16; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v17; // [rsp+58h] [rbp+18h] BYREF

  v3 = *((_BYTE *)this + 276) == 2;
  v16 = 1;
  if ( !v3 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v14, a2, a3);
    v5 = *(unsigned __int64 **)this;
    LODWORD(v17) = 0;
    v6 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v14, *v5, (unsigned int *)&v17);
    if ( v6 )
    {
      v7 = (_QWORD *)((char *)v6 + 120);
      if ( v6 != (struct PFF *)-120LL )
      {
        v8 = (_DWORD *)*((_QWORD *)this + 29);
        v14[0] = v7;
        v15 = 0LL;
        *v8 = 0;
        v9 = (_DWORD *)*((_QWORD *)this + 27);
        *((_QWORD *)this + 25) = 0LL;
        *((_DWORD *)this + 52) = -1;
        *v9 = 0;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 61) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v14[1] = *v7;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v14); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v14) )
        {
          v12 = i;
          if ( !i )
            break;
          v17 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, (__int64 **)&v17, &v16, 0) )
          {
            v13 = *((_DWORD *)this + 46);
            if ( !v13 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v17 + 4) + *(int *)(*((_QWORD *)v17 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v12, 1, v16);
                return;
              }
              v13 = ++*((_DWORD *)this + 46);
            }
            if ( v13 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v12, 1, v16);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
          **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage(
                                                      *(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL),
                                                      v11) << 8;
      }
    }
  }
}
