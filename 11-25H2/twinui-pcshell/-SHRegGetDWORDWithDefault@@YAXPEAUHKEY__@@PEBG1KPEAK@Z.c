/*
 * XREFs of ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x180654DB4
 * Callers:
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x1801F64B8 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803AD0D0 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

void __fastcall SHRegGetDWORDWithDefault(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int *a5)
{
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, a2, a3, a5) < 0 )
    *a5 = a4;
}
