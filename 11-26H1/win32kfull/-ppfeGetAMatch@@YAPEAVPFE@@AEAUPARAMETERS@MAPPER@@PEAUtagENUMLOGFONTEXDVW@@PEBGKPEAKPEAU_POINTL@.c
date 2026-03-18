/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0
 * Callers:
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 * Callees:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400C85B0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400C9A60 (--0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x14020C6D0 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // eax
  struct _FONTHASH **v19; // rdi
  struct PFE *result; // rax
  unsigned int v21; // eax
  HDEV v22; // rdx
  struct PFF *v23; // rax
  struct PFF *v24; // rbx
  _QWORD *v25; // rdi
  unsigned int v26; // [rsp+38h] [rbp-C8h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-A8h]
  _BYTE v30[180]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+124h] [rbp+24h]
  struct PFE *v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+140h] [rbp+40h]
  _DWORD *v34; // [rsp+148h] [rbp+48h]
  _DWORD *v35; // [rsp+150h] [rbp+50h]
  _DWORD *v36; // [rsp+158h] [rbp+58h]
  unsigned int v37; // [rsp+164h] [rbp+64h]

  MAPPER::MAPPER((MAPPER *)v30, a1, a5, a6, a7, a2, a3, v26);
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96);
  if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v30, v12, v13) )
    return v32;
  v17 = *(_QWORD *)(v11 + 20384);
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 28) )
    {
      v37 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, (struct _FONTHASH **)v17, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, (struct _FONTHASH **)(v17 + 8), 0) )
      {
        return v32;
      }
    }
  }
  v28[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v15, v14, v16) + 96) + 20400LL);
  v18 = v37;
  if ( (v37 & 0x200) != 0 )
  {
    v22 = *(HDEV *)a1;
    v27 = 0;
    v37 |= 0x80u;
    v23 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v28, v22, &v27);
    v24 = v23;
    if ( v23 )
    {
      v25 = (_QWORD *)((char *)v23 + 120);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, (struct _FONTHASH **)v23 + 15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, (struct _FONTHASH **)v24 + 14, 0) )
      {
        return v32;
      }
      v18 = v37;
      if ( (v37 & 0x20000000) != 0 )
      {
        result = v32;
        if ( !v32 || *(struct PFF **)v32 != v24 )
        {
          *a5 = 0;
          *a7 = 0;
          a6->y = 1;
          a6->x = 1;
          v28[1] = *v25;
          v28[0] = v25;
          v29 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v28);
        }
        return result;
      }
    }
    else
    {
      v18 = v37;
    }
  }
  v19 = *(struct _FONTHASH ***)(v11 + 20392);
  v37 = v18 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, v19, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, v19 + 1, 1) )
  {
    return v32;
  }
  result = v32;
  if ( !v32 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v30, a5, a7, a6);
    if ( !result )
    {
      if ( !*((_BYTE *)a1 + 69) )
      {
        v21 = v37;
        if ( (v37 & 0x200) == 0 )
        {
LABEL_15:
          if ( (v21 & 0x20000) != 0 )
          {
LABEL_20:
            v37 = v21 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v30);
            return v32;
          }
          MAPPER::bGetFaceName((MAPPER *)v30);
          *v36 = 0;
          v32 = 0LL;
          v33 = -1;
          *v34 = 0;
          *v35 = 1;
          v35[1] = 1;
          v37 &= ~0x80u;
          v31 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, v19, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v30, v19 + 1, 0) )
          {
            return v32;
          }
          result = v32;
          if ( !v32 )
          {
            v21 = v37;
            goto LABEL_20;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v30);
        result = v32;
        if ( v32 )
          return result;
      }
      v21 = v37;
      goto LABEL_15;
    }
  }
  return result;
}
