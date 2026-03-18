/*
 * XREFs of ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x14010C2AC
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x14010BC2C (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 * Callees:
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddLeftNice(pathwide::WIDENER *this, struct _POINTFIX *a2, int a3)
{
  pathwide::vAddNice(
    (pathwide::WIDENER *)((char *)this + 976),
    (pathwide::WIDENER *)((char *)this + 692),
    a2,
    (struct EVECTORFX *)(a3 == 0));
}
