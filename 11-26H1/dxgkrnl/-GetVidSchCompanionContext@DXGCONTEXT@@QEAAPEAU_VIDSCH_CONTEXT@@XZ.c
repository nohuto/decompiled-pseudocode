/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14019345C
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x14037732C (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x14005A3D4 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     ?GetDefaultQos@DXGPROCESS@@QEBA?AW4_KHETERO_CPU_QOS@@XZ @ 0x140074A64 (-GetDefaultQos@DXGPROCESS@@QEBA-AW4_KHETERO_CPU_QOS@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  int DefaultQos; // eax
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+24h] [rbp-34h]
  __int128 v9; // [rsp+34h] [rbp-24h]

  result = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 33);
  if ( !result )
  {
    v7 = 0;
    v3 = *((_QWORD *)this + 2);
    v9 = 0LL;
    v8 = 0LL;
    v4 = *((_QWORD *)this + 2);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 416LL);
    DefaultQos = DXGPROCESS::GetDefaultQos(*(_QWORD *)(v4 + 40));
    v7 = 64;
    DWORD1(v9) = DefaultQos;
    *(_QWORD *)((char *)&v8 + 4) = *((unsigned int *)this + 97);
    result = VIDSCH_EXPORT::VidSchCreateContext(
               *(VIDSCH_EXPORT **)(*(_QWORD *)(v6 + 16) + 736LL),
               this,
               (struct _VIDSCH_CONTEXT_DATA *)&v7);
    *((_QWORD *)this + 33) = result;
  }
  return result;
}
