/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x14007A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007AAA0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400893A4 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  unsigned int v2; // edi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  _QWORD v6[14]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  UserEnterUserCritSecShared();
  v4 = Gre::Base::Globals(v3);
  GreAcquireSemaphoreShared<1,>(v4);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1, v4);
  if ( v6[0]
    && ((v7 = *(_QWORD *)(v6[0] + 48LL), (**(_DWORD **)(v6[0] + 976LL) & 1) != 0)
     || (*(_DWORD *)(v6[0] + 36LL) & 0x8200) == 0x8200)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
  {
    GreAcquireSemaphoreShared<2,>(v4);
    v2 = 1;
  }
  else
  {
    GreAcquireSemaphore<2,>(v4);
  }
  GreAcquireSemaphoreShared<3,>(v4);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v2;
}
