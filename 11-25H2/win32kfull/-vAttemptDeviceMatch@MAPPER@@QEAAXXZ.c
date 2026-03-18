/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140312F1C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400B8CB0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x140105190 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x140171008 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x14017AF74 (ulCharsetToCodePage.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x14017BD94 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019CA3C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401DE6AC (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this, __int64 a2)
{
  bool v2; // zf
  struct PFF *v4; // rax
  _QWORD *v5; // rcx
  _DWORD *v6; // rax
  struct PFE *i; // rax
  __int64 v8; // rdx
  struct PFE *v9; // rdi
  unsigned int v10; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  unsigned __int8 v13; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v14; // [rsp+58h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 276) == 2;
  v13 = 1;
  if ( !v2 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v11, a2);
    v4 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v11, **(_QWORD **)this, 0LL);
    if ( v4 )
    {
      v5 = (_QWORD *)((char *)v4 + 120);
      if ( v4 != (struct PFF *)-120LL )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 29);
        v11[0] = v5;
        v12 = 0LL;
        *v6 = 0;
        *((_QWORD *)this + 25) = 0LL;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) = 0;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 61) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v11[1] = *v5;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v11); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v11) )
        {
          v9 = i;
          if ( !i )
            break;
          v14 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v14, &v13, 0) )
          {
            v10 = *((_DWORD *)this + 46);
            if ( !v10 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v14 + 4) + *(int *)(*((_QWORD *)v14 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v9, 1, v13);
                return;
              }
              v10 = ++*((_DWORD *)this + 46);
            }
            if ( v10 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v9, 1, v13);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
          **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage(
                                                      *(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL),
                                                      v8) << 8;
      }
    }
  }
}
