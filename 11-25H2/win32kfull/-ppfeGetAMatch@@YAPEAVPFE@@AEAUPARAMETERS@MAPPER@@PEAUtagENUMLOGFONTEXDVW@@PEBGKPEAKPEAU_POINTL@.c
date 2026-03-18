/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8
 * Callers:
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x14001AAE0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 * Callees:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B61AC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400B80E8 (--0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400B8694 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400B8B00 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400B8CB0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1401046A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x140104FC0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401DE6AC (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140312F1C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct MAPPER::PARAMETERS *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5,
        struct _POINTL *a6,
        unsigned int *a7)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct _FONTHASH **v17; // rdi
  struct PFE *result; // rax
  unsigned int v19; // eax
  HDEV v20; // rdx
  struct PFF *v21; // rax
  struct PFF *v22; // rbx
  _QWORD *v23; // rdi
  unsigned int v24; // [rsp+38h] [rbp-C8h]
  _QWORD v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B0h]
  _BYTE v27[180]; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+114h] [rbp+14h]
  struct PFE *v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+130h] [rbp+30h]
  _DWORD *v31; // [rsp+138h] [rbp+38h]
  _DWORD *v32; // [rsp+140h] [rbp+40h]
  _DWORD *v33; // [rsp+148h] [rbp+48h]
  unsigned int v34; // [rsp+154h] [rbp+54h]

  MAPPER::MAPPER((MAPPER *)v27, a1, a5, a6, a7, a2, a3, v24);
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96);
  if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v27) )
    return v29;
  v15 = *(_QWORD *)(v11 + 20408);
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 28) )
    {
      v34 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)(v15 + 8), 0) )
      {
        return v29;
      }
    }
  }
  v25[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 20424LL);
  v16 = v34;
  if ( (v34 & 0x200) != 0 )
  {
    v20 = *(HDEV *)a1;
    v34 |= 0x80u;
    v21 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v25, v20, 0LL);
    v22 = v21;
    if ( v21 )
    {
      v23 = (_QWORD *)((char *)v21 + 120);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v21 + 15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v22 + 14, 0) )
      {
        return v29;
      }
      v16 = v34;
      if ( (v34 & 0x20000000) != 0 )
      {
        result = v29;
        if ( !v29 || *(struct PFF **)v29 != v22 )
        {
          *a5 = 0;
          *a7 = 0;
          a6->y = 1;
          a6->x = 1;
          v25[1] = *v23;
          v25[0] = v23;
          v26 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v25);
        }
        return result;
      }
    }
    else
    {
      v16 = v34;
    }
  }
  v17 = *(struct _FONTHASH ***)(v11 + 20416);
  v34 = v16 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17 + 1, 1) )
  {
    return v29;
  }
  result = v29;
  if ( !v29 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v27, a5, a7, a6);
    if ( !result )
    {
      if ( !*((_BYTE *)a1 + 69) )
      {
        v19 = v34;
        if ( (v34 & 0x200) == 0 )
        {
LABEL_15:
          if ( (v19 & 0x20000) != 0 )
          {
LABEL_20:
            v34 = v19 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v27);
            return v29;
          }
          MAPPER::bGetFaceName((MAPPER *)v27);
          *v33 = 0;
          v30 = -1;
          v29 = 0LL;
          *v31 = 0;
          *v32 = 1;
          v32[1] = 1;
          v34 &= ~0x80u;
          v28 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17 + 1, 0) )
          {
            return v29;
          }
          result = v29;
          if ( !v29 )
          {
            v19 = v34;
            goto LABEL_20;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v27);
        result = v29;
        if ( v29 )
          return result;
      }
      v19 = v34;
      goto LABEL_15;
    }
  }
  return result;
}
