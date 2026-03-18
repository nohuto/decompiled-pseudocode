/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x14011146C
 * Callers:
 *     CurateVpr @ 0x140111418 (CurateVpr.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0phhhqqx_EtwWriteTransfer @ 0x14004F8C8 (McTemplateK0phhhqqx_EtwWriteTransfer.c)
 *     McTemplateK0phhhxxqqx_EtwWriteTransfer @ 0x14004F994 (McTemplateK0phhhxxqqx_EtwWriteTransfer.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 *     Percentagex100 @ 0x1400B6F00 (Percentagex100.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1401236B0 (-CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  VIDMM_LINEAR_POOL **v2; // r13
  _WORD *v3; // rbx
  __int64 *v4; // r14
  unsigned __int64 *v5; // r15
  __int64 *v6; // r12
  unsigned __int16 v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned int v17; // r9d
  __int16 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // [rsp+20h] [rbp-78h]
  __int16 v25; // [rsp+20h] [rbp-78h]
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  struct _VIDSCH_SYNC_OBJECT *v27; // [rsp+28h] [rbp-70h]
  unsigned __int16 v28; // [rsp+28h] [rbp-70h]
  unsigned __int8 v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 456) )
  {
    *((_BYTE *)this + 456) = 1;
    v2 = (VIDMM_LINEAR_POOL **)((char *)this + 256);
    v3 = (_WORD *)((char *)this + 68);
    v4 = (__int64 *)((char *)this + 8);
    v5 = (unsigned __int64 *)((char *)this + 440);
    v6 = (__int64 *)((char *)this + 448);
    if ( (byte_14008A201 & 0x20) != 0 )
    {
      VIDMM_LINEAR_POOL::CalculateCapacity(*v2);
      v7 = VIDMM_SEGMENT::DriverId(this);
      Percentagex100(*v6, *v5);
      Percentagex100((unsigned int)dword_14008A614, (unsigned int)dword_14008A618);
      v3 = (_WORD *)((char *)this + 68);
      v28 = v7;
      v25 = *((_WORD *)this + 34);
      McTemplateK0phhhxxqqx_EtwWriteTransfer(v9, v8, v10, *(_QWORD *)(*v4 + 24), v25, v28);
    }
    v11 = *v5;
    v12 = *v6;
    if ( *v6 < v11 * (unsigned int)dword_14008A614 / (unsigned int)dword_14008A618 )
    {
      v13 = VIDMM_LINEAR_POOL::CalculateCapacity(*v2);
      v14 = dword_14008A61C;
      v15 = v13;
      v16 = v11 - v12;
      if ( v13 < (unsigned int)dword_14008A61C * v16 / (unsigned int)dword_14008A620 )
      {
        v29 = 0;
        v30 = 0LL;
        if ( (byte_14008A201 & 0x20) != 0 )
        {
          VIDMM_SEGMENT::DriverId(this);
          Percentagex100(v15, v16);
          Percentagex100(v14, v17);
          LOWORD(v27) = v18;
          LOWORD(v24) = *v3;
          McTemplateK0phhhqqx_EtwWriteTransfer(v20, v19, v21, *(_QWORD *)(*v4 + 24), v24, v27);
        }
        VIDMM_GLOBAL::StartPreparation(*v4, 0xFFFFFFFF, 0LL, 0LL, 0x7Eu);
        v23 = (int)VIDMM_GLOBAL::MoveResources(
                     (VIDMM_GLOBAL *)*v4,
                     v22,
                     0,
                     (__int64)this,
                     v26,
                     0,
                     *((_QWORD *)this + 53),
                     *((_QWORD *)this + 54),
                     1u,
                     &v29,
                     &v30);
        VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)*v4, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        if ( (int)v23 < 0 )
        {
          WdLogSingleEntry3(3LL, v23, v30, v29);
          WdLogGlobalForLineNumber = 5990;
        }
      }
    }
  }
}
