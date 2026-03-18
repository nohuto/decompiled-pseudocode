/*
 * XREFs of ??1MAPIDCOBJ@@QEAA@XZ @ 0x14018961C
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     NtGdiMaskBlt @ 0x140189500 (NtGdiMaskBlt.c)
 *     NtGdiPlgBlt @ 0x140306FF0 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

void __fastcall MAPIDCOBJ::~MAPIDCOBJ(MAPIDCOBJ *this)
{
  OPTAPIDCOBJ::~OPTAPIDCOBJ((MAPIDCOBJ *)((char *)this + 112));
  APIDCOBJ::~APIDCOBJ(this);
}
